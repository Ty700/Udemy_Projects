/*
* This program:
* Gathers two arrays from the user - not static
* Multiples each index of vector 2, by each element in vector 1 
* Returns it in a new array on the heap
* Prints the resulting array to the user 
*/

#include "preprocessor_directives.h"
#include "main.h"

int main(){
    //Gathers two arrays from user - Size of each array is saved in the first element of the array
    int *arr1 = gatherElements();
    int *arr2 = gatherElements();

    //multplies the vectors and stores the pointer returned from multiply_arrays in result
    int *result = multiply_arrays(arr1, arr1[0], arr2, arr2[0]);
    
    //prints the array result points to
    print(result, arr1[0] * arr2[0]);
    
    delete [] result, arr1, arr2;
}
