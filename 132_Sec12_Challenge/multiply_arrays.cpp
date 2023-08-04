int *multiply_arrays(const int* array1, const int sizeOfArray1, 
                const int* array2, const int sizeOfArray2){
    
    //Creates a new array on the heap that is the size of array1 and array2 multiplied together
    int *result_arr_ptr = new int[sizeOfArray1 * sizeOfArray2];

    int indexToMove{0};

    //Multiples each element in array 2, with array 1, and stores it in newly create result array 
    for(int i{1}; i < sizeOfArray2 + 1; i++){
        for(int j{1}; j < sizeOfArray1 + 1; j++){
            *(result_arr_ptr + indexToMove) = *(array2 + i) * *(array1 + j);
            indexToMove++;
        }
    }

    return result_arr_ptr;
}
