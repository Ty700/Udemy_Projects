// Section 16
// Using Base class pointers

#include <iostream>
#include <vector>

// This class uses dynamic polymorphism for the withdraw method
// We'll learn about virtual functions in the next video
class Account {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw" << std::endl;
    }
    virtual ~Account() {  }
};

class Checking: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw" << std::endl;
    }
    
    virtual ~Checking() {  }
};

class Savings: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Savings::withdraw" << std::endl;
    }
    virtual ~Savings() {  }
};

class Trust: public Account  {
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw" << std::endl;
    }
    virtual ~Trust() {  }
};

int main() {
    std::cout << "\n === Pointers ==== " << std::endl;
    
    //Base  ptr = new AccountType thus "Base Ptr"
    Account *p1 = new Account();
    Account *p2 = new Savings();
    Account *p3 = new Checking();
    Account *p4 = new Trust();
    Account *p5 = new Account();
    
    //NEEDS to have a virtual func to be able to do any of this though
    p1->withdraw(1000);
    p2->withdraw(1000);
    p3->withdraw(1000);
    p4->withdraw(1000);
    
    std::cout << "\n === Array ==== " << std::endl;
    Account *array [] = {p1,p2,p3,p4,p5};
    for (auto i=0; i<5; ++i)
        array[i]->withdraw(1000);
    
    //Array will cycle through each ptr and call the pointed to class's withdraw method.
    //Super abstract and makes it a lot easier to think about withdrawing
    //NEEDS to have a virtual func to be able to do any of this though
    std::cout << "\n === Array ==== " << std::endl;
    array[0] = p4; //Changing p1 to a trust account
    
    for (auto i=0; i<5; ++i)
        array[i]->withdraw(1000);

    std::cout << "\n === Array ==== " << std::endl;
    array[0] = p5; //Changing p1 back to a simple account
    for (auto i=0; i<5; ++i) 
        array[i]->withdraw(1000);

    std::cout << "\n === Vector ==== " << std::endl;
    //Vector of base ptrs
    std::vector<Account *> accounts {p1,p2,p3,p4,p5};
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);
        
    std::cout << "\n === Vector ==== " << std::endl;
    //Adding two trust accounts to the back of the vector. Shows how abstract and easy it is to add more accounts without adding more code
    accounts.push_back(p4);
    accounts.push_back(p4);
    for (auto acc_ptr: accounts)
        acc_ptr->withdraw(1000);



    std::cout << "\n === Clean up ==== " << std::endl;
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
        
    return 0;
}
