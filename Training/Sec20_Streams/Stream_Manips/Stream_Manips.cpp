/*
*
*   Default:
*       - setw - not set
*       - left - when no field width, right - when using field width
*       - fill - not set by default
*   Some of these manips affect only the next data
*/

//Example

#include <iomanip>
#include <iostream>

int main(){
    double num{1234.5678};
    std::string hello{"HELLO"};

    //With a field width, default justification is right justified
    //Setw only affects the next data type
    std::cout << std::setw(10) << num << hello << std::endl; //Will output "  1234.5678HELLO" since HELLO doesn't have a field width 

    std::cout << std::setw(10) << num <<
                 std::setw(10) << hello << 
                 std::setw(10) << hello << std::endl;
                 //Will display "  1234.5678     HELLO     HELLO" since everything has a field width with right justification

    std::cout << std::setw(10) << std::left << num << hello << std::endl; //setw & left will only affect num will display "1234.57   HELLO"
    

    //Setfill
    //only works alongside setw() 
    //Notice how the setfill only works with num and not hello.
    //Setfill is percistent untlike setw(), but needs a width
    std::cout << std::setfill('-');
    std::cout << std::setw(10) << num << hello << std::endl;


}