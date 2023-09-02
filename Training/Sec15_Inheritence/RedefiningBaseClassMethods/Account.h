#pragma once
#include <iostream>

class Account{

    friend std::ostream &operator<<(std::ostream &os, const Account &account);
    
    protected:
        double balance;
    public:
        Account();
        Account(double amount);
        void deposit(double amount);
        void withdrawl(double amount);
};