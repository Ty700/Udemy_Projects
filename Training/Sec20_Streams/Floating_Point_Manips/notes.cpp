/*
*Default values:
*   Setprecision - number of digits displayed (6) 
*   Fixed - not fixed to a specific number of digits after the decimal point
*   noshowpoint - trailing zeros are not displayed
*   nouppercase - when displaying in scientific notation
*   noshowpos - no '+' dispalyed
*/

#include <iostream>
#include <iomanip>

int main(){
    //Example
    double num{1234.5678};

    std::cout << num << std::endl; //Will display 6 digits thus: 1234.57 will be displayed

    num = {123456789.987654321}; //Can't show the entire number in 6 digits, thus will display in scientific notation
    std::cout << num << std::endl; //Displays 1.234567e+08

    //Sets max digits displayed to be 9
    std::cout << std::setprecision(9);
    std::cout << num << std::endl; //Will display 1234567890 - Note: trailing at the end
    
    std::cout << std::setprecision(6); //Default
    //Fixes the numbers of digits to the right of the decimal. Thus 6 digits will be displayed after the decimal + whatever is left of it.
    //Not just 6 total digits - will add zeros to fill it to 6 if need be
    std::cout << std::fixed; 
    std::cout << num << std::endl;

    //Scientifc Notation
    //Still fixed thus will be X.XXXeXXX
    std::cout << std::setprecision(3);
    std::cout << std::scientific;
    std::cout << num << std::endl;

    //Show point
    //Will add trailing 0s to fill it to precision
    num = {12.34};

    std::cout.unsetf(std::ios::scientific | std::ios::fixed);
    std::cout << std::setprecision(6);

    std::cout << std::showpoint;
    std::cout << num; // will display 12.3400 & ! 12.34
}