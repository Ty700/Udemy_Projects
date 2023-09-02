#include <iostream>

class Base{
    private:
        int value;

    public:
        Base(): value{0} {std::cout << "Base no-args constructor" << std::endl;}
        Base(int x): value{x} {std::cout << "Base (int) overloaded constructor" << std::endl;}
        ~Base(){ std::cout << "Base Destructor" << std::endl;}
};

class Derived: public Base{
    using Base::Base;
    private:
        int double_value;
    public:
        Derived() : double_value{0} {std::cout << "Derived no-args constructor" << std::endl;}
        // Derived(int x) : double_value(x*2) {std::cout << "Derived (int) overloaded constructor" << std::endl;}
        ~Derived() {std::cout << "Derived Destructor" << std::endl;}
};

int main(){

    Base base;

    Base b(100);

    Derived derived; //Note: If there is not a derived constructor/destructor it will call the base constructor/destructor...


    //Since I am doing "Using Base::Base" I can comment out 19 BUT IT WILL NOT INITALIZE double_value. The value we pass in will set the value in the base part.
    Derived d(100); //Note: If there is not a derived constructor with an int for a parameter it will error UNLESS I DO "USING BASE::BASE" as this inherits the non-special constructors such as Base(int x)

}