#pragma once

#include "Account.h"

class Checking_Account : public Account{

private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    

public:
    Checking_Account(std::string name = def_name, double balance = def_balance);

    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;

protected:
    const double WITHDAWL_FEE{1.50};
};
