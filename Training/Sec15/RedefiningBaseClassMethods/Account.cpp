#include "Account.h"


Account::Account() : Account(0.0) {}

Account::Account(double balance) : balance(balance) {}

void Account::deposit(double amount){ balance += amount; }



void Account::withdrawl(double amount){
    if(balance - amount >= 0){
        balance -= amount;
    } else {
        std::cout << "Insuffient funds.\n";
    }
}

std::ostream &operator<<(std::ostream &os, const Account &account) {
    os << "Account balance: " << account.balance;
    return os;
} 