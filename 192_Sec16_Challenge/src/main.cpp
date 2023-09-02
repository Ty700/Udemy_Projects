// Section 16
// Challenge 
#include "../headers/Account_Util.h"

int main() {
    //Commented out section is for the Udemy Challenge. I made this but also gonna take this a step further and develop a UI
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

    for(int i = 0; i < 3; i++){
        ptrToObjs[2]->withdraw(100); //Should fail b/c of max limit of withdraws
        display(*ptrToObjs[2]);
    }

    

    //Display menu
        // - Show balance, Show balance of all
        // - Withdrawl from one
            // - Display all after a withdrawl
        // - Display balance of one
        // - Display balance for all

    //Capture user input

    //Preform user input
        //"0" is exit
    


    return 0;
}

