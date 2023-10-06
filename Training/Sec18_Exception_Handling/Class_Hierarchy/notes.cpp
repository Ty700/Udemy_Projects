/*

C++ std lib exception class hierarchy

C++ provides a class hierarchyh of exception class
    - std::exception is the base class - much include stdexcept
    - all subclasses implement the what() virtual function
    - we can create our own user-defined exception subclasses
*/

//Example:
#include <stdexcept>
#include <memory>
#include <iostream>

//Inherits std::exception from <stdexcept>
class IllegalBalanceException : public std::exception {
    public:

        //noecept keyword: method can't throw an exception
        IllegalBalanceException() noexcept = default;
        ~IllegalBalanceException() = default;
        //what() function will return custom string describing error
        virtual const char* what() const noexcept{
            return "Illegal balance exeception";
        }
};

//Using the std::exception

class Account {
    public:
        //Looks familiar
        Account(std::string name, double balance)
            : name{name}, balance{balance} {
                if(balance < 0.0){
                    throw IllegalBalanceException{};
                }
            }
    protected:
        std::string name;
        double balance;
};

class Checking_Account : public Account{
    public:
        Checking_Account(std::string name, double balance)
            : Account(name, balance) {}
};

int main(){

    try{
        double balance{0};

        std::cout << "Enter a balance: ";
        std::cin >> balance;
        std::unique_ptr<Account> moes_account = 
            std::make_unique<Checking_Account>("Moes", balance);
    }
    
    catch(const IllegalBalanceException &error){
        //Calls the what() method we described in the IllegalBalanceException class
        std::cerr << error.what() << std::endl;
    }

}