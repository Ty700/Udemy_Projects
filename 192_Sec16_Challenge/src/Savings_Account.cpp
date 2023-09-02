#include "../headers/Savings_Account.h"

Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
    : Account {name, balance}, int_rate{int_rate} {}

bool Savings_Account::deposit(double amount) {
    amount += amount * (int_rate/100);
    return Account::deposit(amount);
}

bool Savings_Account::withdraw(double amount){
    withdrawlCount += 1;
    return Account::withdraw(amount);
}

void Savings_Account::print(std::ostream &os) const {
    os << "[Account Name: " << name
        << " | Account Balance: " << balance 
        << " | Account Interest Rate: " << int_rate
         << " | Withdraw Count: " << withdrawlCount 
        << "]" << std::endl; 
}

std::string Savings_Account::getName() const{
    return this->name;
}