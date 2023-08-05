#include "preprocessor_directives.h"
#include "main.h"
// Gathers the elements the user wants to multiply
int *gatherElements(){

    //To count how many times func has been called
    static int funcCallCount = 0; 

    int sizeOfArray{0};

    //if first time being called, it will display "first array" else "second array"
    if(funcCallCount == 0){
        std::cout << "Enter in the size for the first array: ";
            std::cin >> sizeOfArray;
    } else {
        std::cout << "Enter in the size for the second array: ";
            std::cin >> sizeOfArray;
    }

    //Creating a new array with the size the user gives us + 1.
    //First index = size of index to pass back to main without creating another variable for it
    int *arrayPtr = new int[sizeOfArray + 1]; 

    //starts at 1 since 0th index is reserved for size
    for(int i{1}; i < sizeOfArray + 1; i++){
        int input{0};
        std::cout << "Enter in a number: ";
            std::cin >> input;
        *(arrayPtr + i) = input;
    }

//reserves 0th index as the size of the array - did it at the end to make sure it is never overwritten. I think it's safer this way.
    *(arrayPtr + 0) = sizeOfArray; 

//inc funcCallCount to make if statement on line 12 false
    funcCallCount++;

    return arrayPtr;
}
