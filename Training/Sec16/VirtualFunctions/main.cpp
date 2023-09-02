// Section 16
// Virtual functions

#include <iostream>

// This class uses dynamic polymorphism for the withdraw method
class Account {
public:
    //Setting up virtual withdraw to be able to be overriden
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {};
};

class Checking: public Account  {
public:
    //overriding withdraw funciton in Account
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    virtual ~Checking() {};
};

class Savings: public Account  {
public:
    //overriding withdraw funciton in Account
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {};
};

class Trust: public Account  {
public:
    //overriding withdraw funciton in Account
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {};
};

int main() {
    std::cout << "\n === Pointers ==== " << std::endl;
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    

    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1; //Error - no virtual destruction found - Only base class destructor is called if no virtual destructor found - loads of mem leaks
    delete p2; //Error - no virtual destruction found - Only base class destructor is called if no virtual destructor found - loads of mem leaks
    delete p3; //Error - no virtual destruction found - Only base class destructor is called if no virtual destructor found - loads of mem leaks
    delete p4; //Error - no virtual destruction found - Only base class destructor is called if no virtual destructor found - loads of mem leaks
        
    return 0;
}
