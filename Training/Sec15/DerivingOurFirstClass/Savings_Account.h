#pragma once
#include "Account.h" //Need to include Account header, if not it will not be able to reference account class

class Savings_Account : public Account{ //notice it is inherting the public aspects of Account

public:

    double int_rate;
    std::string name;

    Savings_Account();
    ~Savings_Account();

    void deposit(double amount);
    void withdrawl(double amount);
};