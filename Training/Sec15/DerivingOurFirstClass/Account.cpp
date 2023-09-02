#include "Account.h"

Account::Account() : balance{0}, name{"Tyler's Account"} {}

void Account::deposit(double amount) {
    std::cout << "Account deposit called with " << amount << std::endl;
}


void Account::withdrawl(double amount){
    std::cout << "Account withdraw called with " << amount << std::endl;
}