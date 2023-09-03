#pragma once
#include "Account.h"

class Checking_Account : public Account{

private:
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double int_rate = 0.0;
    int withdrawlCount = 0; //Not asked for but decided to track # of withdraws for every type of account.

public:
    Checking_Account(std::string name = def_name, double balance = def_balance);

    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual std::string getName() const override;

protected:
    const double WITHDAWL_FEE{1.50};
};
