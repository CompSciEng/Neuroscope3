


#ifdef OLD_HEADER_FILENAME
#include <iostream.h>
#else
#include <iostream>
#endif
using std::cout;
using std::endl;
#include <string>
#include "H5Cpp.h"
#include "hdf5.h"
#include "H5File.h"
using namespace H5;
#include "neuroscopexmlreader.h"
#include <QString>

#include <array.h>

// !!! Fix the lowercase
// !!! added -xml to the file name, since it already has an XML file attached.
// !!! think about neuroscopexmlreader::nwb_locations
//
//< ? xml version = '1.0' ? >
//<nwb_locations version = "1.0" creator = "neuroscope-2.0.0">
//  <DATASET_NAME>"/processing/ecephys/LFP/lfp/data"< / DATASET_NAME>
//  <SAMPLING_NAME>"/processing/ecephys/LFP/lfp/starting_time"< / SAMPLING_NAME>
//< / nwb_locations>

//void getVoltageGroups(Array<short>& indexData, Array<short>& groupData, int channelNb, std::string hsFileName);


// /stimulus/presentation/PulseStim_0V_10001ms_LD0/timestamps


QString getLocationName(std::string& s, const std::string& newExt) {

   std::string new_filename = s;
   std::string::size_type i = s.rfind('.', s.length());

   if (i != std::string::npos)
      new_filename.replace(i, s.length()-i, newExt);
   else
      new_filename.append(newExt);

   QString QNewName = QString::fromUtf8(new_filename.c_str());
   return QNewName;
}

std::string getDataSetName(std::string hsFileName)
{
    QString strDSN = "/processing/ecephys/LFP/lfp/data";
    QString strLoc = getLocationName(hsFileName, "_loc.xml");

    NeuroscopeXmlReader reader = NeuroscopeXmlReader();
    if(reader.parseFile(strLoc,NeuroscopeXmlReader::PARAMETER)){
        strDSN = reader.getNWBDataSetName();
    }

    std::string utf8_text = strDSN.toUtf8().constData();
    return utf8_text;
}

std::string getSamplingName(std::string hsFileName)
{
    QString strSN = "/processing/ecephys/LFP/lfp/starting_time";
    QString strLoc =  getLocationName(hsFileName, "_loc.xml");

    NeuroscopeXmlReader reader = NeuroscopeXmlReader();
    if(reader.parseFile(strLoc,NeuroscopeXmlReader::PARAMETER)){
        strSN = reader.getNWBSamplingName();
    }

    std::string utf8_text = strSN.toUtf8().constData();
    return utf8_text;
}

int ReadHyperSlab(int *data_out, hsize_t *startOffsets, hsize_t *count, std::string hsFileName, std::string DSN )
{
    try
    {
        std::cout << "ReadHyperSlab " << std::endl;
        /*
         * Turn off the auto-printing when failure occurs so that we can
         * handle the errors appropriately
         */
        #ifdef TRASH  
        Exception::dontPrint();
        #endif

        // The stride array allows you to sample elements along a dimension.For example, a stride of one(or NULL) will select every element 
        //     along a dimension, a stride of two will select every other element, and a stride of three will select an element after every 
        //     two elements.
        //The block array determines the size of the element block selected from a dataspace.If the block size is one or NULL then the block 
        //     size is a single element in that dimension.
        hsize_t stride[2]{ 1,1 };  // Stride of hyperslab
        hsize_t block[2]{ 1,1 };  // Block sizes

        // Open the file and dataset and get the dataspace.
        H5File* file = new H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
        //std::string DSN = getDataSetName(hsFileName);
        DataSet* dataset = new DataSet(file->openDataSet(DSN.c_str()));
        DataSpace fspace = dataset->getSpace();
        fspace.selectHyperslab(H5S_SELECT_SET, count, startOffsets, stride, block);

        // Create memory dataspace.
        //Select hyperslab in memory. Hyperslab has the same size and shape as the selected hyperslab for the file dataspace. 
        DataSpace mspace(2, count);
        mspace.selectHyperslab(H5S_SELECT_SET, count, startOffsets, stride, block);

        // Read data back to the buffer matrix.
        dataset->read(data_out, PredType::NATIVE_INT, mspace, fspace);

        // Close the dataset and the file.
        delete dataset;
        delete file;
        std::cout << "Done ReadHyperSlab " << std::endl;

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
        return -1;
    }
    // catch failure caused by the DataSet operations
    catch (DataSetIException error)
    {
        std::cout << "DataSetIException " << std::endl;
        //error.printError();
        return -1;
    }
    // catch failure caused by the DataSpace operations
    catch (DataSpaceIException error)
    {
        std::cout << "DataSpaceIException " << std::endl;
        //error.printError();
        return -1;
    }
    // catch failure caused by the DataSpace operations
    catch (DataTypeIException error)
    {
        std::cout << "DataTypeIException " << std::endl;
        //error.printError();
        return -1;
    }
#endif    
    return 0;


}

// Read all channels for a given time range
// unsigned long long
void ReadBlockData(int *data_out, int iStart, long nLength, int nChannels, std::string hsFileName)
{
    hsize_t startOffsets[2]{ (unsigned long) iStart, 0 };   // Start offsets of hyperslab row, column
    hsize_t count[2]{ (unsigned long) nLength, (unsigned long)nChannels };  // Block count

    std::string DSN = getDataSetName(hsFileName);

    ReadHyperSlab(data_out, startOffsets, count, hsFileName, DSN);
}


void ReadBlockDataNamed(int *data_out, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN)
{
    hsize_t startOffsets[2]{ (unsigned long) iStart, 0 };   // Start offsets of hyperslab row, column
    hsize_t count[2]{ (unsigned long) nLength, (unsigned long)nChannels };  // Block count
    ReadHyperSlab(data_out, startOffsets, count, hsFileName, DSN);
}


void ReadNWBAttribs(std::string H5_FileName, int &nbChannels, int &resolution, double &samplingRate, int &offset, long &length)
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
        std::string DSN = getDataSetName(H5_FileName);
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

        std::string DS = getSamplingName(H5_FileName);
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

long GetNWBLength(std::string H5_FileName )
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

void ReadBlockData(Array<short> &retrieveData, int iStart, long nLength, int nChannels, std::string hsFileName)
{
    std::cout << "Start ReadBlockData " << std::endl;
    long nbValues = nLength * nChannels;
    std::cout << "nbValues  " << nbValues << std::endl;

    // Modified by RHM to read Neurodata Without Borders format
    int *data_out = new int[nbValues];
    
    ReadBlockData(data_out, iStart, nLength, nChannels, hsFileName);

    long k = 0;
    for (int i = 0; i < nLength; ++i)
        for (int j = 0; j < nChannels; ++j)
            retrieveData[k] = data_out[k++];

    delete[] data_out;

    std::cout << "Done ReadBlockData " << std::endl;
}



void ReadBlockData2A(Array<short> &retrieveData, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN)
{
    std::cout << "Start ReadBlockData " << std::endl;
    long nbValues = nLength * nChannels;
    std::cout << "nbValues  " << nbValues << std::endl;

    // Modified by RHM to read Neurodata Without Borders format
    int *data_out = new int[nbValues];

    ReadBlockDataNamed(data_out, iStart, nLength, nChannels, hsFileName, DSN);

    long k = 0;
    for (int i = 0; i < nLength; ++i)
        for (int j = 0; j < nChannels; ++j)
            retrieveData[k] = data_out[k++];

    delete[] data_out;

    std::cout << "Done ReadBlockData " << std::endl;
}



void getVoltageGroups(Array<short>& indexData, Array<short>& groupData, int channelNb, std::string hsFileName)
{
    //std::cout << "Start ReadBlockData " << std::endl;
    QString strLoc =  getLocationName(hsFileName, "_loc.xml");
    NeuroscopeXmlReader reader = NeuroscopeXmlReader();
    if(reader.parseFile(strLoc,NeuroscopeXmlReader::PARAMETER)){
        QString DSNIndex = reader.getGenericText("nwb_voltage_electrodes", "/processing/ecephys/LFP/lfp/electrodes");
        QString DSNGroup = reader.getGenericText("nwb_voltage_electrodes_shanks", "general/extracellular_ephys/electrodes/shank_electrode_number");

        ReadBlockData2A(indexData, 0, channelNb, 1, hsFileName, DSNIndex.toUtf8().constData());
        ReadBlockData2A(groupData, 0, channelNb, 1, hsFileName, DSNGroup.toUtf8().constData());
    }
}


int ReadHyperSlab(double *data_out, hsize_t *startOffsets, hsize_t *count, std::string hsFileName, std::string DSN )
{
    try
    {
        std::cout << "ReadHyperSlab " << std::endl;
        /*
         * Turn off the auto-printing when failure occurs so that we can
         * handle the errors appropriately
         */
        #ifdef TRASH
        Exception::dontPrint();
        #endif

        // The stride array allows you to sample elements along a dimension.For example, a stride of one(or NULL) will select every element
        //     along a dimension, a stride of two will select every other element, and a stride of three will select an element after every
        //     two elements.
        //The block array determines the size of the element block selected from a dataspace.If the block size is one or NULL then the block
        //     size is a single element in that dimension.
        hsize_t stride[2]{ 1,1 };  // Stride of hyperslab
        hsize_t block[2]{ 1,1 };  // Block sizes

        // Open the file and dataset and get the dataspace.
        H5File* file = new H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
        //std::string DSN = getDataSetName(hsFileName);
        DataSet* dataset = new DataSet(file->openDataSet(DSN.c_str()));
        DataSpace fspace = dataset->getSpace();
        fspace.selectHyperslab(H5S_SELECT_SET, count, startOffsets, stride, block);

        // Create memory dataspace.
        //Select hyperslab in memory. Hyperslab has the same size and shape as the selected hyperslab for the file dataspace.
        DataSpace mspace(2, count);
        mspace.selectHyperslab(H5S_SELECT_SET, count, startOffsets, stride, block);

        // Read data back to the buffer matrix.
        dataset->read(data_out, PredType::NATIVE_DOUBLE, mspace, fspace);

        // Close the dataset and the file.
        delete dataset;
        delete file;
        std::cout << "Done ReadHyperSlab " << std::endl;

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
        return -1;
    }
    // catch failure caused by the DataSet operations
    catch (DataSetIException error)
    {
        std::cout << "DataSetIException " << std::endl;
        //error.printError();
        return -1;
    }
    // catch failure caused by the DataSpace operations
    catch (DataSpaceIException error)
    {
        std::cout << "DataSpaceIException " << std::endl;
        //error.printError();
        return -1;
    }
    // catch failure caused by the DataSpace operations
    catch (DataTypeIException error)
    {
        std::cout << "DataTypeIException " << std::endl;
        //error.printError();
        return -1;
    }
#endif
    return 0;


}

void ReadBlockDataNamed(double *data_out, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN)
{
    hsize_t startOffsets[2]{ (unsigned long) iStart, 0 };   // Start offsets of hyperslab row, column
    hsize_t count[2]{ (unsigned long) nLength, (unsigned long)nChannels };  // Block count
    ReadHyperSlab(data_out, startOffsets, count, hsFileName, DSN);
}

int ReadEvents(/*double *data_out, long &nbEvents,*/ std::string hsFileName, std::string DSN)
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
        ReadBlockDataNamed(data_out, 0, length, 1, hsFileName, DSN);
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


int ReadSpikeShank(std::string hsFileName, std::string DSN)
{

    H5File file = H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
    DataSet dataset = file.openDataSet(DSN.c_str());

    // Should be H5T_REFERENCE
    H5T_class_t type_class = dataset.getTypeClass();
    cout << type_class << endl;

    DataSpace dataspace = dataset.getSpace();

    // Get the number of dimensions in the dataspace.
    int rank = dataspace.getSimpleExtentNdims();

    // Get the dimension size of each dimension in the dataspace
    hsize_t dims_out[2];
    int ndims = dataspace.getSimpleExtentDims(dims_out, NULL);

    int nbChannels = (int)(dims_out[1]);
    long length = (long)(dims_out[0]);       /*qlonglong*/


    // Get class of datatype and print message if it's an integer.
    if (type_class == H5T_REFERENCE)
    {
        hobj_ref_t* rbuf = new hobj_ref_t[length];
        hobj_ref_t* tbuf = new hobj_ref_t[length];
        //tbuf=(hobj_ref_t*)malloc(temp_size*SPACE1_DIM1);

            // Read selection from disk
            dataset.read(rbuf, PredType::STD_REF_OBJ);

            return 0;
            //char sz60[60];
            //H5Rget_name(dataset.IdComponent, H5T_REFERENCE, &rbuf[0], sz60, 60);

            // Dereference dataset object by ctor, from the location where
            // 'dataset' is located
            //DataSet dset2(dataset, &rbuf[0]);

//            // Check information in the referenced dataset
//            sid1 = dset2.getSpace();
//            hssize_t n_elements = sid1.getSimpleExtentNpoints();
//            verify_val((long)n_elements, 4, "DataSpace::getSimpleExtentNpoints", __LINE__, __FILE__);

//            // Read from disk
            //dset2.read(tbuf, PredType::NATIVE_UINT);

            // Look at H5Rget_name()
//            for(tu32=(unsigned *)tbuf,i=0; i<SPACE1_DIM1; i++,tu32++)
//               VERIFY(*tu32, (uint32_t)(i*3), "Data");

            // Close dereferenced dataset
            //dset2.close();





        // rbuf = (hobj_ref_t*) malloc(sizeof(hobj_ref_t)*SPACE1_DIM1);
        //dset2 = H5Rdereference(dataset,H5R_OBJECT,&rbuf[0]);
        //DataSet dSet2 =  H5Rdereference(dataset,H5R_OBJECT,&rbuf[0]);
        //DataSet dSet2 = H5Rdereference2(dataset, H5R_OBJECT, H5R_DATASET_REGION, (void *)&rbuf[0]);

            /* Check information in referenced dataset */
            //sid1 = H5Dget_space(dset2);



        // H5O_type_t
        //auto reftype = dataset.getRefObjType();

        // Get the integer datatype
        //FloatType floattype = dataset.getFloatType(); // .getIntType();

        // Get order of datatype and print message if it's a little endian.
        //H5std_string order_string;
        //H5T_order_t order = floattype.getOrder(order_string);

        // Get size of the data element stored in file and print it.
        //size_t size = reftype.getSize();

        DataSpace dataspace = dataset.getSpace();

        // Get the number of dimensions in the dataspace.
        int rank = dataspace.getSimpleExtentNdims();

        // Get the dimension size of each dimension in the dataspace
        hsize_t dims_out[2];
        int ndims = dataspace.getSimpleExtentDims(dims_out, NULL);

        int nbChannels = (int)(dims_out[1]);
        long length = (long)(dims_out[0]);       /*qlonglong*/
        //int resolution = 8 * size;

        std::cout << "nbChannels " << nbChannels << " length " << length << std::endl;

        double *data_out = new double[length];
        ReadBlockDataNamed(data_out, 0, length, 1, hsFileName, DSN);
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

