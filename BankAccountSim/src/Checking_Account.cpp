#include "../headers/Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account{name, balance} {}


bool Checking_Account::withdraw(double amount){
    amount += WITHDAWL_FEE;
    withdrawlCount += 1;
    return Account::withdraw(amount);
}

bool Checking_Account::deposit(double amount){
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os) const {
    os << "[Account Name: " << name
        << " | Account Balance: " << balance 
        << " | Account Interest Rate: " << int_rate
        << " | Withdraw Count: " << withdrawlCount
        << "]" << std::endl; 
}

std::string Checking_Account::getName() const{
    return this->name;
}