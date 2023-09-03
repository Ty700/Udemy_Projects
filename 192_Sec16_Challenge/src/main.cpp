// Section 16
// Challenge 
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
    ptrToObjs[2]->withdraw(2000); //Should fail due to being more than 20%


    ptrToObjs[2]->withdraw(500); //Pass
    ptrToObjs[2]->withdraw(500); //Fail - Too many

    displayAll(ptrToObjs);

    //Free memory
    for(auto acc : ptrToObjs){
        delete acc;
    }
    return 0;
}

