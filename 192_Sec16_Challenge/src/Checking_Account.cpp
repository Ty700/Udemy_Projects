#include "../headers/Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance} {}


bool Checking_Account::withdraw(double amount){
    amount += WITHDAWL_FEE;
    return Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount){
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const {
    os << "Checking Account print";
}