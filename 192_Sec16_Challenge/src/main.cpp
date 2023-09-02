// Section 15
// Challenge 
#include "../headers/I_Printable.h"
#include "../headers/Account.h"
#include "../headers/Checking_Account.h"
#include "../headers/Savings_Account.h"
#include "../headers/Trust_Account.h"
#include "../headers/Account_Util.h"

int main() {

    std::vector<Account *> ptrToObjs;

    Account *checking_acc = new Checking_Account("Checking Acc");
    Account *savings_acc = new Savings_Account("Savings Acc", 0, 1.5);
    Account *trust_acc = new Trust_Account("Trust Acc", 0 , 5);

    ptrToObjs.push_back(checking_acc);
    ptrToObjs.push_back(savings_acc);
    ptrToObjs.push_back(trust_acc);

    std::cout << "=====CREATING ACCOUNT'S=======" << std::endl;
    displayAll(ptrToObjs);
    
    std::cout << "=====ACCOUNT'S AFTER DEPOSIT=======" << std::endl;
    deposit(ptrToObjs, 5000);

    std::cout << "=====ACCOUNT'S AFTER WITHDRAWL=======" << std::endl;
    withdraw(ptrToObjs, 500);

        std::cout << "=====ACCOUNT'S AFTER WITHDRAWL 2=======" << std::endl;
    withdraw(ptrToObjs, 2500);

    return 0;
}

