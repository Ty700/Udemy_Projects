// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "../headers/I_Printable.h"
#include "../headers/Account.h"
#include "../headers/Checking_Account.h"
#include "../headers/Savings_Account.h"
#include "../headers/Trust_Account.h"
#include "../headers/Account_Util.h"

int main() {

    std::vector<Account *> ptrToObjs;

    Account *checking_acc = new Checking_Account();
    Account *savings_acc = new Savings_Account();
    Account *trust_acc = new Trust_Account();

    ptrToObjs.push_back(checking_acc);
    ptrToObjs.push_back(savings_acc);
    ptrToObjs.push_back(trust_acc);

    for(int i = 0; i < ptrToObjs.size(); i++){
        std::cout << *ptrToObjs.at(i) << std::endl;
    }
    

    return 0;
}

