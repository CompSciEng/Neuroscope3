#include "nwbreader.h"

//#include "nwblocations.h"

//QString NWBLocations

int NWBReader::ReadVoltage() {return 0;}
int NWBReader::ReadSpikeTimes(){return 0;}
int NWBReader::ReadEvents(){return 0;}




NWBReader::NWBReader(std::string hsFileName)
    :NWB_Locations(hsFileName)
{
    this->hsFileName = hsFileName;
    this->HDF5_Utilities = HDF5Utilities();
}

NWBReader::NWBReader()
    :NWB_Locations("")
{
}


// Read all channels for a given time range
// unsigned long long
void NWBReader::ReadVoltageData(int *data_out, int iStart, long nLength, int nChannels, std::string hsFileName)
{
    hsize_t startOffsets[2]{ (unsigned long) iStart, 0 };   // Start offsets of hyperslab row, column
    hsize_t count[2]{ (unsigned long) nLength, (unsigned long)nChannels };  // Block count

    std::string DSN = NWB_Locations.getDataSetName(hsFileName);

    HDF5_Utilities.ReadHyperSlab(data_out, startOffsets, count, hsFileName, DSN);
}

void NWBReader::ReadNWBAttribs(std::string H5_FileName, int &nbChannels, int &resolution, double &samplingRate, int &offset, long &length)
{
    try
    {
        std::cout << "Start ReadNWBAttribs " << std::endl;
        /*
         * Turn off the auto-printing when failure occurs so that we can
         * handle the errors appropriately
         */
        #ifdef TRASH
        Exception::dontPrint();
        #endif

        H5File file = H5File(H5_FileName.c_str(), H5F_ACC_RDONLY);
        std::string DSN = NWB_Locations.getDataSetName(H5_FileName);
        // std::string DS = getSamplingName(H5_FileName);
        DataSet dataset = file.openDataSet(DSN.c_str());

        // Integer
        H5T_class_t type_class = dataset.getTypeClass();
        //cout << type_class << endl;

        // Get class of datatype and print message if it's an integer.
        if (type_class == H5T_INTEGER)
        {
            // Get the integer datatype
            IntType intype = dataset.getIntType();

            // Get order of datatype and print message if it's a little endian.
            H5std_string order_string;
            H5T_order_t order = intype.getOrder(order_string);

            // Get size of the data element stored in file and print it.
            size_t size = intype.getSize();

            DataSpace dataspace = dataset.getSpace();

            // Get the number of dimensions in the dataspace.
            int rank = dataspace.getSimpleExtentNdims();

            // Get the dimension size of each dimension in the dataspace
            hsize_t dims_out[2];
            int ndims = dataspace.getSimpleExtentDims(dims_out, NULL);

            nbChannels = (int)(dims_out[1]);
            length = (long)(dims_out[0]);       /*qlonglong*/
            resolution = 8 * size;
        }

        std::string DS = NWB_Locations.getSamplingName(H5_FileName);
        DataSet startSet = file.openDataSet(DS.c_str());
        Attribute attr = startSet.openAttribute("rate");
        DataType type = attr.getDataType();
        attr.read(type, &samplingRate);

        std::cout << "Done ReadNWBAttribs " << std::endl;

    }  // end of try block
    catch (...) {
        // ...
    }
#ifdef TRASH
    // catch failure caused by the H5File operations
    catch (FileIException error)
    {
        std::cout << "FileIException " << std::endl;
        //error.printError();
        return;
    }
    // catch failure caused by the DataSet operations
    catch (DataSetIException error)
    {
        std::cout << "DataSetIException " << std::endl;
        //error.printError();
        return;
    }
    // catch failure caused by the DataSpace operations
    catch (DataSpaceIException error)
    {
        std::cout << "DataSpaceIException " << std::endl;
        //error.printError();
        return;
    }
    // catch failure caused by the DataSpace operations
    catch (DataTypeIException error)
    {
        std::cout << "DataTypeIException " << std::endl;
        //error.printError();
        return;
    }
#endif
}

long NWBReader::GetNWBLength(std::string H5_FileName )
{
    std::cout << "Start GetNWBLength " << std::endl;
    int nbChannels = 0;
    int resolution = 16;
    double samplingRate = 0;
    int offset = 0;
    long length = 0;

    ReadNWBAttribs(H5_FileName, nbChannels, resolution, samplingRate, offset, length);
    std::cout << "Done GetNWBLength " << std::endl;
    return length;
}

void NWBReader::ReadVoltageData(Array<short> &retrieveData, int iStart, long nLength, int nChannels, std::string hsFileName)
{
    std::cout << "Start ReadBlockData " << std::endl;
    long nbValues = nLength * nChannels;
    std::cout << "nbValues  " << nbValues << std::endl;

    // Modified by RHM to read Neurodata Without Borders format
    int *data_out = new int[nbValues];

    ReadVoltageData(data_out, iStart, nLength, nChannels, hsFileName);

    long k = 0;
    for (int i = 0; i < nLength; ++i)
        for (int j = 0; j < nChannels; ++j)
            retrieveData[k] = data_out[k++];

    delete[] data_out;

    std::cout << "Done ReadBlockData " << std::endl;
}


void NWBReader::ReadBlockData2A(Array<short> &retrieveData, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN)
{
    std::cout << "Start ReadBlockData " << std::endl;
    long nbValues = nLength * nChannels;
    std::cout << "nbValues  " << nbValues << std::endl;

    // Modified by RHM to read Neurodata Without Borders format
    int *data_out = new int[nbValues];

    HDF5_Utilities.ReadBlockDataNamed(data_out, iStart, nLength, nChannels, hsFileName, DSN);

    long k = 0;
    for (int i = 0; i < nLength; ++i)
        for (int j = 0; j < nChannels; ++j)
            retrieveData[k] = data_out[k++];

    delete[] data_out;

    std::cout << "Done ReadBlockData " << std::endl;
}



void NWBReader::getVoltageGroups(Array<short>& indexData, Array<short>& groupData, int channelNb, std::string hsFileName)
{
    //std::cout << "Start ReadBlockData " << std::endl;

    std::string DSNIndex = NWB_Locations.getGenericText("nwb_voltage_electrodes", "/processing/ecephys/LFP/lfp/electrodes");
    std::string DSNGroup = NWB_Locations.getGenericText("nwb_voltage_electrodes_shanks", "general/extracellular_ephys/electrodes/shank_electrode_number");

    ReadBlockData2A(indexData, 0, channelNb, 1, hsFileName, DSNIndex);//.toUtf8().constData());
    ReadBlockData2A(groupData, 0, channelNb, 1, hsFileName, DSNGroup);//.toUtf8().constData());
}

int NWBReader::ReadEvents(/*double *data_out, long &nbEvents,*/ std::string hsFileName, std::string DSN)
{

    H5File file = H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
    DataSet dataset = file.openDataSet(DSN.c_str());

    // Should be double
    H5T_class_t type_class = dataset.getTypeClass();
    cout << type_class << endl;

    // Get class of datatype and print message if it's an integer.
    if (type_class == H5T_FLOAT)
    {
        // Get the integer datatype
        FloatType floattype = dataset.getFloatType(); // .getIntType();

        // Get order of datatype and print message if it's a little endian.
        //H5std_string order_string;
        //H5T_order_t order = floattype.getOrder(order_string);

        // Get size of the data element stored in file and print it.
        size_t size = floattype.getSize();

        DataSpace dataspace = dataset.getSpace();

        // Get the number of dimensions in the dataspace.
        int rank = dataspace.getSimpleExtentNdims();

        // Get the dimension size of each dimension in the dataspace
        hsize_t dims_out[2];
        int ndims = dataspace.getSimpleExtentDims(dims_out, NULL);

        int nbChannels = (int)(dims_out[1]);
        long length = (long)(dims_out[0]);       /*qlonglong*/
        int resolution = 8 * size;

        std::cout << "nbChannels " << nbChannels << " length " << length << " resolution " << resolution << std::endl;

        double *data_out = new double[length];
        HDF5_Utilities.ReadBlockDataNamed(data_out, 0, length, 1, hsFileName, DSN);
        for (int i=0; i<length; ++i)
        {
            std::cout << i << " data: " << data_out[i] << std::endl;
        }
        delete [] data_out;

        // !!!! do we delete or close the file and link handles?
        // !!!! Do we have links to better labels?
    }
    return 0;
}

//template <typename T>
//struct NamedArray {
//  std::string strName;
//  T *arrayData;
//};


int NWBReader::ReadSpikeShank(std::string hsFileName, std::string nwb_spike_times, std::string nwb_spike_times_index, std::string nwb_units_electrode_group)
{
    //nwb_spike_times = "units/spike_times";
    //nwb_spike_times_index = "units/spike_times_index";
    //nwb_units_electrode_group = "units/electrode_group";

    double *spikeTimes = NULL;
    long lLengthST;
    HDF5_Utilities.Read1DArray(&spikeTimes, lLengthST, hsFileName, nwb_spike_times);

    int *spikeIndices = NULL;
    long lLengthSI;
    HDF5_Utilities.Read1DArray(&spikeIndices, lLengthSI, hsFileName, nwb_spike_times_index);

    std::string *spikeNames = NULL;
    long lLengthSN;
    HDF5_Utilities.Read1DArray(&spikeNames, lLengthSN, hsFileName, nwb_units_electrode_group);


    NamedArray<double> *nad = new NamedArray<double>[lLengthSI];
    for (int idx=0; idx < lLengthSI; ++idx)
    {
        int ndxLower = (idx > 0) ? spikeIndices[idx-1] : 0;
        int ndxUpperP1 = spikeIndices[idx];
        int nLen = ndxUpperP1 - ndxLower;
        double *dArray = new double[nLen];
        for (int ii=0; ii < nLen; ++ii)
        {
            dArray[ii]= spikeTimes[ndxLower + ii];
        }
        nad[idx].strName = spikeNames[idx];
        nad[idx].arrayData = dArray;

        // print debugging information
        std::cout << nad[idx].strName << " ";
        for (int jj=0; jj < 8; ++jj)
                std::cout << nad[idx].arrayData[jj] << " ";
        std::cout << std::endl;

    }

    if (spikeTimes)
        delete [] spikeTimes;
    if (spikeIndices)
        delete [] spikeIndices;
    if (spikeNames)
        delete [] spikeNames;

    return 0;
}



int NWBReader::ReadSpikeShank(std::string hsFileName, std::string DSN)
{
    return ReadSpikeShank(hsFileName, "units/spike_times", "units/spike_times_index", "units/electrode_group");
}



