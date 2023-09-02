// Section 16
// Challenge 
#include "../headers/I_Printable.h"
#include "../headers/Account.h"
#include "../headers/Checking_Account.h"
#include "../headers/Savings_Account.h"
#include "../headers/Trust_Account.h"
#include "../headers/Account_Util.h"

int main() {

    std::vector<Account *> ptrToObjs = createAccounts();

    std::cout << "=======CREATING ACCOUNTS=======" << std::endl;
    displayAll(ptrToObjs);
    
    std::cout << "=======ACCOUNT'S AFTER DEPOSIT=======" << std::endl;
    deposit(ptrToObjs, 5000);

    std::cout << "=======ACCOUNT'S AFTER WITHDRAWL=======" << std::endl;
    withdraw(ptrToObjs, 500);

    std::cout << "=======ACCOUNT'S AFTER WITHDRAWL 2=======" << std::endl;
    withdraw(ptrToObjs, 500);

    std::cout << "=======TRUST ACCOUNT WITHDRAWL TEST=======" << std::endl;
    for(int i = 0; i < 3; i++){
        ptrToObjs[2]->withdraw(100); //Should fail two times
        display(*ptrToObjs[2]);
    }


    return 0;
}

