#pragma once
#include "Savings_Account.h"

class Trust_Account : public Savings_Account{ 
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double int_rate = def_int_rate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream &os) const override;
    virtual std::string getName() const override;

    virtual ~Trust_Account() {}

protected:
        int withdrawlCount;
    
private:
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
    static constexpr const char *def_name = "Unnamed Savings Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 3.0;
    double calculateMaxWithdraw(double currentBalance);
    static constexpr int max_withdrawls = 3;
    static constexpr double bonusThreshold = 5000.00;
    static constexpr int bonusAmount = 50;
};
