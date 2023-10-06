/*
    Exceptions can be thrown within a class as well.
    ***DO NOT throw exceptions from a destructor.***
    
    Methods:
        These work the same way as they do for function
    
    Constructors:
        Constructor may fail
        They do not return any value
        Example: 
            -If you can not initialize an object, the constructor throws an error


*/

// Example for constructor execption handling

#include <string>
#include <memory>
#include <iostream>

//Exception Class
class IllegalBalanceException{};

class I_Printable{

    friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj) {
        obj.print(os);
        return os;
    }

public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() {}
};

class Account : public I_Printable{
    
public:
    Account(std::string name, double balance)
        : name{name}, balance{balance} {
            //If user makes an account with a negative balance, it will throw obj
            if(balance < 0.0){
                throw IllegalBalanceException{};
            }
        }

    virtual void print(std::ostream &os) const = 0;

protected:
    std::string name;
    double balance;

};

class Checking_Account : public Account {
public:
    Checking_Account(std::string name, double balance)
        : Account(name, balance) {};

    virtual void print(std::ostream &os) const override;
};

void Checking_Account::print(std::ostream &os) const {
    os << "[Account Name: " << name
        << " | Account Balance: " << balance 
        // << " | Account Interest Rate: " << int_rate
        // << " | Withdraw Count: " << withdrawlCount
        << "]" << std::endl; 
}


int main(){
    //Will try and make an account, but the balance is negative... thus the Account construct will throw an error
    try{
        double balance = 0;
        std::cout << "Enter account balance: " << std::endl;
        std::cin >> balance;
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", balance);
        std::cout << *moes_account << std::endl;
    }

    catch(const IllegalBalanceException &ex){
        std::cerr << "Error: Account can't have a negative balance" << std::endl;
    }
}