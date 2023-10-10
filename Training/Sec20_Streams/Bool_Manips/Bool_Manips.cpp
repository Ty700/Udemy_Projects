/*
*   Default for displaying boolean is: 0 for False & 1 for true
*   We can tell ostream to display it as "False" for false and "True" for 1
*/

#include <iomanip>
#include <iostream>

#define num1 10
#define num2 10
#define num3 20

int main(){
    
    bool test = (num1 == num2) ? 1 : 0;
    bool test2 = (num1 == num3) ? 1 : 0;

    //Example 1:
    std::cout << test << std::endl; //Will display 1 or 0
    std::cout << test2 << std::endl; //Will display 1 or 0
    std::cout << std::noboolalpha; //Resets to default - have to do this for inline
    std::cout << "------------" << std::endl;
    //Inline version

    //Once we overload the output stream EVERY output from there on will follow the same rules
    //Therefore, I don't really need to put std::cout << std::boolalpha << test2 << std::endl;
    //Since I already overloaded the ostream on line 24, line 25 will follow the same rules

    //Example 2:
    std::cout << std::boolalpha << test << std::endl; //Will display "True" or "False"
    std::cout << test2 << std::endl; //Will display "True" or "False"
    std::cout << "------------" << std::endl;

    //Method version
    //We can set the flag for the formatting of the output. More explict than inline.
    std::cout.setf(std::ios::boolalpha); //Sets a flat that overloads ostream it explicitly
    std::cout << std::resetiosflags(std::ios::boolalpha); //Resets flag explictily

    //Example 3:
    std::cout << test << std::endl; //Will display 1 or 0
    std::cout << test2 << std::endl; //Will display 1 or 0
    std::cout << "------------" << std::endl;

}