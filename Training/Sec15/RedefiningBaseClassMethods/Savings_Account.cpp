#include "Savings_Account.h"

Savings_Account::Savings_Account(double amount, double int_rate)
    : Account(amount), int_rate{int_rate} {}

Savings_Account::Savings_Account() : Savings_Account(0.0, 0.0) {}

void Savings_Account::deposit(double amount){
    amount += (amount * (int_rate/100));

    Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Savings_Account &account) {
    os << "Savings Account Ballance: " << account.balance << " Int_Rate: " << account.int_rate;
    return os;
}