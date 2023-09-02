#pragma once
#include <iostream>
#include <string>

class Account{
public:
    double balance;
    std::string name;
    void deposit(double amount);
    void withdrawl(double amount);

};