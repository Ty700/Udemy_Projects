#include "../headers/UI.h"

// void captureInput(int &userSelect){
//     std::cin >> userSelect;
// }

void displayATMMenu(){
    std::cout << "Please Select an option:\n"
              << "[1] Create Account\n"
              << "[2] Deposit Money\n"
              << "[3] Withdraw Money\n"
              << "[4] Check Balance\n" 
              << "[0] Exit\n";
}

void menuAction(int userSelect, std::vector<Account *> &ptrToAccList){
    switch(userSelect){
        case 1:
            createAccounts(ptrToAccList);
            break;
        case 2:
            //Deposit
            break;
        case 3:
            //Withdraw
            break;
        case 4:
            displayAll(ptrToAccList);
            break;
        case 0:
            //Do nothing
            break;
        default:
            std::cout << "Invalid Choice.\n";
            break;
        }
}

