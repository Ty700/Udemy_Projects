#include "../headers/Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {}

bool Account::deposit(double amount) {
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
}

bool Account::withdraw(double amount) {
    if (balance - amount >=0) {
        std::cout << green << "WITHDRAW SUCCESSFUL FOR: " << reset << name << std::endl << std::endl;
        balance -= amount;
        return true;
    } else {
        std::cout << red << "WITHDRAWL FAILED FOR: " << reset << name << std::endl
                << red << "REASON: INSUFFICENT FUNDS" << reset << std::endl;
        return false;
    }
}

