/*
*
*   Allow us to read or write from strings in memory much as we would read and write to files
*   Very powerful
*   Very useful for data validation
*
*   3 Classes we can choose from when using stringstreams
*       - stringstream - allows us to read & write to strings 
*       - istringstream - allows us to read string
*       - ostringstream - allows us to write string
*
*   MUST INCLUDE <sstream>
*   Declare obj from above classes
*   Connect it to a std::string
*   Read/write data from/to the string stream using formatted I/o
*/

//Example

#include <sstream>
#include <iostream>

int main(){

//Reading Example
    int num{};
    double total {};
    std::string name{};

    //string with our info
    std::string info {"Moe 100 1234.5"};

    //Creating a istringstream obj called "iss" and attaching it to the string "info"
    std::istringstream iss{info};

    //Now we can extract data from that istringstream and assign it to different vars.
    iss >> name >> num >> total;

//Writing Example
    //Creating ostringstream obj
    std::ostringstream oss{};

    //Push name, num, and total onto oss with spaces in-between
    oss << name << " " << num << " " << total << std::endl;

    std::cout << oss.str();

//Why would we use it? - Data validation

//Say I want a user to type in an integer and only and integer... I can do:

    int value{};
    std::string input{};

    std::cout << "Enter an integer: ";
    std::cin >> input;

    std::istringstream ss{input};

    if(ss >> value){
        std::cout << value << std::endl;
        std::cout << "An integer was entered." << std::endl;
    } else {
        std::cout << value  << std::endl;
        std::cout << "An integer was not entered." << std::endl;
    }

    /*Why does this work?
        Well, since we want to extract an integer from the string, if none is given it will extract 0 - false
        If one is given, it will be anything but 0, thus true
        Adding std::cout << value << std::endl; makes it much easier to understand
    */

}