#ifndef NWBREADER_H
#define NWBREADER_H

#include "nwblocations.h"
#include "hdf5utilities.h"

// !!!! Make this a class with a destructor to help defend against memory leaks.
template <typename T>
struct NamedArray {
  std::string strName;
  T *arrayData;
};


class NWBReader
{
public:
    NWBReader(std::string hsFileName);

    void ReadNWBAttribs(int &nbChannels, int &resolution, double &samplingRate, int &offset, long &length);
    long GetNWBLength();

    void ReadVoltageTraces(Array<short> &retrieveData, int iStart, long nLength, int nChannels);
    void getVoltageGroups(Array<short>& indexData, Array<short>& groupData, int channelNb);

    NamedArray<double> *ReadSpikeShank(std::string nwb_spike_times, std::string nwb_spike_times_index, std::string nwb_units_electrode_group);
    NamedArray<double> *ReadSpikeShank();


    NamedArray<double> *  ReadEvents();

    void ReadBlockData2A(Array<short> &retrieveData, int iStart, long nLength, int nChannels, std::string DSN);

private:
    NWBReader(); // defensive move
    std::string hsFileName;
    NWBLocations NWB_Locations;
    HDF5Utilities HDF5_Utilities;

    void ReadVoltageTraces(int *data_out, int iStart, long nLength, int nChannels);

};


#endif // NWBREADER_H
