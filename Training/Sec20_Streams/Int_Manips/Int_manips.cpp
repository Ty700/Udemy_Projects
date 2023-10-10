/*
*
* Defailt when displaying integer values is: 
    - Dec(base 10)
    - noshowbase - prefix used to show hexadecimal or octal
    - no uppercase - when displaying a prfix and hex values it will be lower case
    - noshowpos - no '+' is displayed for positive numbers
*
*/
#include <iostream>

int main(){
    int num{255};
    std::cout << std::showbase; //Displays what base the number outputted is in. default is //std::noshowbase;
    std::cout << std::uppercase; // will uppercase the output 
    std::cout << std::dec << num << std::endl; //255 - default values
    std::cout << std::hex << num << std::endl; //0xff - will get a 0xFF now with uppercase
    std::cout << std::oct << num << std::endl; //0377 - 0 in front of the number is showing a octal base

    std::cout << std::showpos; //wil add a '+' to positive numbers default is std::noshowbase
    //Reset flgags
    std::cout.setf(std::ios::showbase);
    std::cout.setf(std::ios::uppercase);
    std::cout << std::dec << num << std::endl;
    num = {-255};
    std::cout << std::dec << num << std::endl;


}