#pragma once

#include "Account.h"

class Checking_Account : public Account{

private:
    friend std::ostream &operator<<(std::ostream &os, const Checking_Account &account);
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    

public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    bool withdraw(double amount);

protected:
    const double WITHDAWL_FEE{1.50};
};