#pragma once
#include "preprocessor_directives.h"

// Gathers the elements the user wants to multiply
int *gatherElements();
int *multiply_arrays(const int* array1, const int sizeOfArray1, const int* array2, const int sizeOfArray2);
void print(const int* arrayToPrint, const int &size);
