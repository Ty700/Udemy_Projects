/*
*
*   Input files (fstream and ifstream)
*       - #include <fstream>
*       - Declare an fstream or ifstream object
*       - Connect it to a file on your file system (opens it for reading)
*       - Read data from the file via stream
*       - Close the stream
*   

#include <fstream>

int main(){
    //Example

    in_file = obj of fstream type

    - First parameter is the file you want to open
    - Second parameter is whether it's an input or output
        std::ios::in = input
        std::ios::out = output

    - Can use the pipe operator in the second parameter to open it in different modes
        - example std::ios::in | std::ios::binary sets the file that is being open to an input and read in binary mode 

    std::fstream in_file("../myfile.txt", std::ios::in);

    std::fstream in_fule("../myfile.txt", std::ios::in | std::ios::binary);

    fstream can open as input and output

    If you are opening a file primarily for input, best practice is to use the ifstream

    Opening a file for reading with ifstream
        Example
            std::ifstream in_file("../my_file.txt", std::ios::in);
                - really don't need the std::ios::in since we are using the ifsream and the default is input mode
            Thus:
            std::ifstream in_file("../my_file.txt"); 
                works just as well

    What if we don't know the path of the file at compile time? 

    Simple, we can assign the file path we want to open to a variable then do <var_name>.open(filename); or <var_name>.open(filename, <modes>);

    Example:
        std::ifstream in_file;
        std::string filename;
        std::cin >> filename;

        in_file.open(filename, <modes>);

    **IMPORTANT**
        Once we open a file, we have to make sure the file was opened successfully
        A few ways to do this.

        if(in_file.isopen()){
            //do something
        } else {
            //file couldn't be open
            //Probably throw an error code
        }

        isopen() will is bool type.
    
    **IMPORTANT**
        If we open a file, we must close it. 
        VERY important for output files

        in_file.close();
    
    Reading from a file

        - We can use the extraction operator (>>) for FORMATTED READS
    Example

    Say we have a file that is:
    __________________
   |100               | 
   |255.67            |
   |Larry             |
   |                  |
   |                  |
   |__________________|

   We can do:

   int main(){
    int num;
    double total;
    std::string name;

    in_file >> num >> total >> name;

    num becomes 100, total 255.67 and name = "Larry"

    AGAIN ONLY WORKS THIS WAY FOR FORMATTED INPUT FILES
   }

}

    Sometimes we want to get an entire like in a file

    we can use the getline function

    std::string line;

    std::getline(in_file, line);

    We can wrap this in a loop to read all of the lines

    Example:

int main(){
    std::ifstream in_file{"../myfile.txt"};
    std::string line;

    if(!in_file){//failed to open
        std::cerr << "File open error" << std::endl;
    }

    while(!in_file.eof()){                  //"While not at the end of the line in in_file"
        std::getline(in_file, line);        //reads
        std::cout << line << std::endl;     //Displays the line
    }

    in_file.close(); //CLOSES
}



Example of reading a text file one character at a time:
This is useful for an unformatted input file

int main(){
    std::ifstream in_file{"../myfile.txt"};
    char c;

    if(!in_file){
        std::cerr << "Opening error" << std::endl;
    }

    while(in_file.get(c)){ //read a character
        cout << c;
    }

    in_file.close();
}
*/