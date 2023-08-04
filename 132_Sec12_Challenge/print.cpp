//prints all the numbers in the given array
#include "preprocessor_directives.h"

void print(const int* arrayToPrint, const int &size){
    for(int i{0}; i < size; i++){
        std::cout << *(arrayToPrint + i) << " ";
    }
    std::cout << std::endl;
}
