// Section 16
// The problem
#include <iostream>
#include <memory>

class Base {
public:
    void say_hello() const {
        std::cout << "Hello - I'm a Base class object" << std::endl;
    }
};

class Derived: public Base {
public:
    void say_hello()  const {   
        std::cout << "Hello - I'm a Derived class object" << std::endl;
    }
};

void greetings(const Base &obj) {
    std::cout << "Greetings: " ;
    obj.say_hello();
}

int main() {
    Base b;
    b.say_hello();
    
    Derived d;
    d.say_hello();
    
    greetings(b);

    //Greetings still says "I'm a base class obj" b/c of the static bind. Greetings is accepting a Base para, thus since derived is a base it calls the base say_hello
    greetings(d); 
    
    //Even though ptr points to a derived obj, compiler only sees that it's a base obj and will call the base say_hello 
    Base *ptr = new Derived();
    ptr->say_hello();
    
    //Smart pointer, haven't covered this yet
    //Ptr1 is a smart Base ptr that points to a derived obj - same issue as compiler only see it's a base ptr and calls the say_hello
    std::unique_ptr<Base> ptr1 = std::make_unique<Derived>();
    ptr1->say_hello();
    
    
    
   delete ptr;
    
    return 0;
}
