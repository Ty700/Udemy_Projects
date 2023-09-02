#pragma once

#include "Account.h"

//Deposit method increments amount to be depositce by amount * int_rate percentage

class Savings_Account : public Account { //Inherits Account

    friend std::ostream &operator<<(std::ostream &os, const Savings_Account &account);

    protected:
        double int_rate;

    public:
        Savings_Account();
        Savings_Account(double amount, double int_rate);
        void deposit(double amount);
        //Withdrawl is inherited
};