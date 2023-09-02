#include "../headers/Account_Util.h"


void displayAll(const std::vector<Account *> &acc){
    for(auto i: acc){
        std::cout << *i << std::endl;
    }
}

void display(const Account &acc){
    std::cout << acc << std::endl;
}

void deposit(const std::vector<Account *> &acc, double amount){
    for(auto i: acc){
        i->deposit(amount);
    }
    displayAll(acc);
}

void withdraw(const std::vector<Account *> &acc, double amount){
    for(auto i: acc){
        if(i->withdraw(amount) == false){
            std::cout << "Withdrawl failed for: " << i->getName() << std::endl;
            continue;
        }
    }
    displayAll(acc);
}

