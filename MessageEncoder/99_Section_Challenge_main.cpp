#include "include.h"
#include "functions.cpp"

int main(){

    std::string stringToEncode;

    //Gathers message the user wants to encode
    std::cout << "Enter in a string:\n";
        getline(std::cin, stringToEncode);
    
    //Encoding
    encodeMessage(stringToEncode);
    //Decoding
    decodeMessage(stringToEncode);

}
