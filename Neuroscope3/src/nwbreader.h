#ifndef NWBREADER_H
#define NWBREADER_H

#include "nwblocations.h"
#include "hdf5utilities.h"

template <typename T>
struct NamedArray {
  std::string strName;
  T *arrayData;
};


class NWBReader
{
public:
    NWBReader(std::string hsFileName);
    int ReadVoltage();
    int ReadSpikeTimes();
    int ReadEvents();

    void getVoltageGroups(Array<short>& indexData, Array<short>& groupData, int channelNb, std::string hsFileName);
    void ReadNWBAttribs(std::string H5_FileName, int &nbChannels, int &resolution, double &samplingRate, int &offset, long &length);
    int ReadSpikeShank(std::string hsFileName, std::string nwb_spike_times, std::string nwb_spike_times_index, std::string nwb_units_electrode_group);
    int ReadSpikeShank(std::string hsFileName, std::string DSN);
    int ReadEvents(/*double *data_out, long &nbEvents,*/ std::string hsFileName, std::string DSN);

    void ReadVoltageData(int *data_out, int iStart, long nLength, int nChannels, std::string hsFileName);
    long GetNWBLength(std::string H5_FileName );
    void ReadVoltageData(Array<short> &retrieveData, int iStart, long nLength, int nChannels, std::string hsFileName);
    void ReadBlockData2A(Array<short> &retrieveData, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN);


private:
    NWBReader(); // defensive move
    std::string hsFileName;
    NWBLocations NWB_Locations;
    HDF5Utilities HDF5_Utilities;


};


#endif // NWBREADER_H
