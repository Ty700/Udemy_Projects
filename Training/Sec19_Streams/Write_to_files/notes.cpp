/*
*
*   1. #include <fstream> - need
*   2. Declare an fstream or ofstream obj
*   3. Connect it to a file
*   4. Write data to the file
*   5. Close the stream - VERY IMPORTANT FOR OUTPUT FILES
*
*   If file that is trying to be open doesn't exist, C++ will create that file and if it does exist
*   the content in it will be overwritten unless we say otherwise
*   Can be open in a way that just appends to the content already there
*   
*/

//Example creating an ofstream obj

#include <fstream>
#include <iostream>

int main(){
    std::fstream out_file("..//myfile.txt", std::ios::out);

    std::ofstream out_file2("..//myfile.txt");

    std::ofstream overwriteExample("..//myfile.txt", std::ios::trunc);

    std::ofstream appendExample("..//myfile.txt", std::ios::app);

    std::ofstream writeAtTheEndExample("..//myfile.txt", std::ios::ate);

    std::ofstream openMethodExample;

    std::string fileName;
    openMethodExample.open(fileName);

    //Checking if file is open - version 1
    if(out_file2.is_open()){
        //read from it
    } else {
        //Trouble opening it
    }

    if(!out_file2){
        //had trouble opening
    }

    //Write to file Example

    int num{100};
    double total{255.67};
    std::string name {"Larry"};

    //it's like using std::cout but just with out output file name
    out_file << num << std::endl << total << std::endl << name << std::endl;


    //Copying text from one file to another

    std::ifstream in_file("..//myfile.txt");
    std::ofstream out_file3("..//copy_of_myfile.txt");
    std::string line;

    if(!in_file){
        std::cerr << "Error Opening Input File" << std::endl;
        return -1;
    }
    
    if(!out_file3){
        std::cerr << "Error Opening/Creating Output File" << std::endl;
    }

    while(std::getline(in_file, line)){
        out_file3 << line << std::endl;
    }


    out_file.close();
    out_file2.close();
    out_file3.close();
    overwriteExample.close();
    appendExample.close();
    writeAtTheEndExample.close();
    openMethodExample.close();
}   