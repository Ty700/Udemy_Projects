//Read the description for more info about this assignment

//Self Added Goal: Skip the user input and read arg from the cmd - practing C

#include <iomanip>
#include <fstream>
#include <iostream>
#include <sstream>

int main(int argc, char **argv){
    std::string needle = argv[1];
    std::string currentWord{};

    int wordCounter{0}, foundCounter{0};

    std::ifstream haystack{"romeo_and_juliet.txt"};

    // std::cout << "Enter the substring to search for: ";
    // std::getline(std::cin, needle);

    if(!haystack){
        std::cerr << "Error: Can't open haystack" << std::endl;
        return -1;
    }

    while(haystack >> currentWord){
        if(currentWord.find(needle) != std::string::npos){
            foundCounter += 1;
        }
        wordCounter += 1;
    }

    std::cout << wordCounter << " words were searched..." << std::endl;
    std::cout << "The substring " << needle << " was found " << foundCounter << " times." << std::endl;

}