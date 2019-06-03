#include "hdf5utilities.h"




int HDF5Utilities::ReadHyperSlab(int *data_out, hsize_t *startOffsets, hsize_t *count, std::string hsFileName, std::string DSN )
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

int HDF5Utilities::ReadHyperSlab(double *data_out, hsize_t *startOffsets, hsize_t *count, std::string hsFileName, std::string DSN )
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

int HDF5Utilities::ReadHyperSlab(double *data_out, hsize_t *startOffsets, hsize_t *count, H5File* file, std::string DSN )
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
        //H5File* file = new H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
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
        //delete file;
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

void HDF5Utilities::ReadBlockDataNamed(double *data_out, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN)
{
    hsize_t startOffsets[2]{ (unsigned long) iStart, 0 };   // Start offsets of hyperslab row, column
    hsize_t count[2]{ (unsigned long) nLength, (unsigned long)nChannels };  // Block count
    ReadHyperSlab(data_out, startOffsets, count, hsFileName, DSN);
}

void HDF5Utilities::ReadBlockDataNamed(int *data_out, int iStart, long nLength, int nChannels, std::string hsFileName, std::string DSN)
{
    hsize_t startOffsets[2]{ (unsigned long) iStart, 0 };   // Start offsets of hyperslab row, column
    hsize_t count[2]{ (unsigned long) nLength, (unsigned long)nChannels };  // Block count
    ReadHyperSlab(data_out, startOffsets, count, hsFileName, DSN);
}


int HDF5Utilities::Read1DArray(double **data_out, long &lLength, std::string hsFileName, std::string DSN)
{
    H5File file = H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
    DataSet dataset = file.openDataSet(DSN.c_str());

    // Should be double
    H5T_class_t type_class = dataset.getTypeClass();
    cout << "Read1DArray should be double " << type_class << endl;

    // Get class of datatype and print message if it's an integer.
    if (type_class == H5T_FLOAT)
    {
      DataSpace dataspace = dataset.getSpace();

      // Get the dimension size of each dimension in the dataspace
      hsize_t dims_out[2];
      int ndims = dataspace.getSimpleExtentDims(dims_out, NULL);
      lLength = (long)(dims_out[0]);       /*qlonglong*/

      *data_out = new double[lLength];
      ReadBlockDataNamed(*data_out, 0, lLength, 1, hsFileName, DSN);

      // Print the 1D array for debugging
      for (int i=0; i<10 /*lLength*/; ++i)
      {
          std::cout << i << " data: " << (*data_out)[i] << std::endl;
      }
      int a=1;

    }
    return 0;
}

int HDF5Utilities::Read1DArray(int **data_out, long &lLength, std::string hsFileName, std::string DSN)
{
    H5File file = H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
    DataSet dataset = file.openDataSet(DSN.c_str());

    // Should be int
    H5T_class_t type_class = dataset.getTypeClass();
    cout << "Read1DArray should be int " << type_class << endl;

    // Get class of datatype and print message if it's an integer.
    if (type_class == H5T_INTEGER)
    {
        DataSpace dataspace = dataset.getSpace();

        // Get the dimension size of each dimension in the dataspace
        hsize_t dims_out[2];
        int ndims = dataspace.getSimpleExtentDims(dims_out, NULL);
        lLength = (long)(dims_out[0]);       /*qlonglong*/

        std::cout << lLength << " is the length " << std::endl;
        *data_out = new int[lLength];
        ReadBlockDataNamed(*data_out, 0, lLength, 1, hsFileName, DSN);

        // Print the 1D array for debugging
        for (int i=0; i<10 /*lLength*/; ++i)
        {
          std::cout << i << " data: " << (*data_out)[i] << std::endl;
        }

    }
    return 0;
}


int HDF5Utilities::Read1DArray(std::string **data_out, long &lLength, std::string hsFileName, std::string DSN)
{
    H5File file = H5File(hsFileName.c_str(), H5F_ACC_RDONLY);
    DataSet dataset = file.openDataSet(DSN.c_str());

    // Should be H5T_REFERENCE
    H5T_class_t type_class = dataset.getTypeClass();
    cout << type_class << endl;

    DataSpace dataspace = dataset.getSpace();


    // Get the dimension size of each dimension in the dataspace
    hsize_t dims_out[2];
    int ndims = dataspace.getSimpleExtentDims(dims_out, NULL);
    lLength = (long)(dims_out[0]);       /*qlonglong*/

    *data_out = new std::string[lLength];

    // Get class of datatype and print message if it's a reference.
    if (type_class == H5T_REFERENCE)
    {
        hobj_ref_t* rbuf = new hobj_ref_t[lLength];

        // Read selection from disk
        dataset.read(rbuf, PredType::STD_REF_OBJ);

        char sz180[180];
        for (int ii=0; ii< lLength; ++ii)
        {
            H5Rget_name(file.getLocId(), H5R_OBJECT, &rbuf[ii], sz180, 180);
            (*data_out)[ii] = sz180;
            cout << sz180 << endl;
        }
    }
    return 0;
}
