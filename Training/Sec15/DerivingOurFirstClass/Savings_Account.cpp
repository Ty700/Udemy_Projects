#include "Savings_Account.h"


Savings_Account::Savings_Account() : int_rate{3.0}{}

Savings_Account::~Savings_Account(){}

void Savings_Account::deposit(double amount){
    std::cout << "Savings account deposit called with " << amount << std::endl;
}

void Savings_Account::withdrawl(double amount){
    std::cout << "Savings account deposit called with " << amount << std::endl;
}