#include <fstream>
#include <iostream>
#include <iomanip>

int main(){
    // std::ifstream in_file;

    // std::string line;
    // int num{0};
    // double total{0};

    // in_file.open("..//myFile.txt");

    // if(!in_file){
    //     std::cerr << "Failure Opening file" << std::endl;
    //     std::exit(1);
    // }

    // in_file >> line >> num >> total;

    // std::cout << line << std::endl; 
    // std::cout << num << std::endl;
    // std::cout << total << std::endl;

    // in_file.close();

//Example of reading until there is nothing left to read

    std::ifstream in_file2;
    std::string line2;
    int num2{0};
    double total2{0};

    in_file2.open("..//test.txt");
    if(!in_file2){
        std::cerr << "Error Opening File" << std::endl;
    }

    while(!in_file2.eof()){
        in_file2 >> line2 >> num2 >> total2;
        
        std::cout << std::setw(10) << std::left << line2
                  << std::setw(10) << num2
                  << std::setw(10) << total2
                  << std::endl;
    }

    in_file2.close();


}