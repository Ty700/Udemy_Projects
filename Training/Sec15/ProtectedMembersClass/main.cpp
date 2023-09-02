#include <iostream>

class Base{

    //Note: Friends of Base have access to all

    public:
    int a{0};
    void display() {
        std::cout << a << ", " << b << ", " << c << std::endl;
    }
    protected:
        int b{0};
    private:
        int c{0};
};

class Derived: public Base{
    //Note: Friends of derived have access to only what derived has access to 

    //A will be public
    //B will be protect
    //C will not be accessible

    public:
        // void accessBaseMembers(){
        //     a = 100;
        //     b = 200;
        // }   
        

};

int main(){
    std::cout << "=== Base member access from base objects========" << std::endl;
    Base base;

    base.a = 100;
    // base.b = 200; - Error - Proected = Private when it comes to objs, thus base obj can't access protected type. Will have to use a setter/getter to set/get b
    // base.c = 300; - Error as it's private

    base.display();

    Derived derived;
    derived.a = 100;
    // derived.b = 200; Error - Again, protected thus can not access
    // derived.c = 300; Error - Derived classes aren't able to access private members of the base class. DOES NOT mean that they don't recieve them. Just can't access them. Even through set/getters
    derived.display();
}