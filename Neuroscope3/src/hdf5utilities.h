#ifndef HDF5UTILITIES_H
#define HDF5UTILITIES_H

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
//#include "neuroscopexmlreader.h"
//#include <QString>
//#include <array.h>



class HDF5Utilities
{
public:
    int ReadHyperSlab(int *data_out, hsize_t *startOffsets, hsize_t *count, std::string hsFileName, std::string DSN );
    int ReadHyperSlab(double *data_out, hsize_t *startOffsets, hsize_t *count, std::string hsFileName, std::string DSN );
    int ReadHyperSlab(double *data_out, hsize_t *startOffsets, hsize_t *count, H5File* file, std::string DSN );

    void ReadBlockDataNamed(double *data_out, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN);
    void ReadBlockDataNamed(int *data_out, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN);

    int Read1DArray(double **data_out, long &lLength, std::string hsFileName, std::string DSN);
    int Read1DArray(int **data_out, long &lLength, std::string hsFileName, std::string DSN);
    int Read1DArray(std::string **data_out, long &lLength, std::string hsFileName, std::string DSN);
};


#endif // HDF5UTILITIES_H
