#include <iostream>
#include "MyString.h"

int main(){

    std::cout << std::boolalpha << std::endl;

    MyString larry{"Larry"};
    MyString moe{"Moe"};

    MyString stooge = larry;
    larry.display();
    moe.display();

    std::cout << (larry == moe) << std::endl;
    std::cout << (larry == stooge) << std::endl;

    larry.display();
    MyString larry2 = -larry;
    larry2.display();

    MyString stooges = larry + "Moe";
    MyString two_stooges = moe + " " + "Larry";

    two_stooges.display();

    MyString three_stooges = moe + " " + larry + " " + "Curly";
    three_stooges.display();
}