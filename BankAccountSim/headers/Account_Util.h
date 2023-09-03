#pragma once

#include "I_Printable.h"
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

void displayAll(const std::vector<Account *> &acc);
void display(const Account &acc);

void deposit(const std::vector<Account *> &acc, double amount);
void withdraw(const std::vector<Account *> &acc, double amount);

void createAccounts(std::vector<Account *> &ptrToAccList);




