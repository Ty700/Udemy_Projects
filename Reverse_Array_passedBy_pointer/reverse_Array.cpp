void reverse_array(int* arr, int size) {

    for(int i{0}; i < (size/2); i++){
        int temp = *(arr + ((size-1) - i)); 
        
        *(arr + ((size-1) - i)) = *(arr + i);
        *(arr + i) = temp;
        
    }
}
