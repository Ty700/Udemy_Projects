/*
* Best practice is to throw objects and not primitive types
* Throw an obj by value
* catch it by reference
*
*
* Creating exception classes and throw instances make it more explicit
*/

#include <iostream>

class DivideByZeroException {

};

class NegativeValueException{

};

double calculate_mpg(int miles, int gallons){
    //Throwing the object makes it much more readable as to what the error is.
    if(gallons == 0){
        throw DivideByZeroException();
    }
    if(miles < 0 || gallons < 0){
        throw NegativeValueException();
    }

    return static_cast<double>(miles)/gallons;
}

int main(){
    int miles = -5;
    int gallons = 0;
    try{ //Will try this. If any errors are thrown, the std::cout won't execute
        int miles_per_gallon = calculate_mpg(miles, gallons);
        std::cout << miles_per_gallon << std::endl;
    }

    //Error handling area. Objects make it much more readable again to understand the error that is thrown
    catch(const DivideByZeroException &error){
        std::cerr << "You can't divide by zero" << std::endl;
    }

    catch(const NegativeValueException &error){
        std::cerr << "Negative values aren't allowed" << std::endl;
    }
    std::cout << "Bye" << std::endl;
}