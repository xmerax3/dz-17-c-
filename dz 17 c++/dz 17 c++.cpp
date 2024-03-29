#include <iostream>


int** addRow(int** array, int& rows, int cols) {
    int** newArray = new int* [rows + 1];

    for (int i = 0; i < rows; ++i) {
        newArray[i] = array[i];
    }

    newArray[rows] = new int[cols];

    delete[] array;

    ++rows;

    return newArray;
}


int** removeRow(int** array, int& rows) {
  
    int** newArray = new int* [rows - 1];

    for (int i = 0; i < rows - 1; ++i) {
        newArray[i] = array[i];
    }

    delete[] array;

    --rows;

    return newArray;
}


int** addColumn(int** array, int rows, int& cols) {
    int** newArray = new int* [rows];

    for (int i = 0; i < rows; ++i) {
        newArray[i] = new int[cols] + 1;
        for (int j = 0; j < cols; ++j) {
            newArray[i][j] = array[i][j];
        }
    }

   
    for (int i = 0; i < rows; ++i) {
        delete[] array[i];
    }
    delete[] array;

    ++cols;

    return newArray;
}


int** removeColumn(int** array, int rows, int& cols) {
   
    int** newArray = new int* [rows];

    for (int i = 0; i < rows; ++i) {
        newArray[i] = new int[cols - 1];
        for (int j = 0; j < cols - 1; ++j) {
            newArray[i][j] = array[i][j];
        }
        delete[] array[i];
    }

    delete[] array;
    --cols;

    return newArray;
}