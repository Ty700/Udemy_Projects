// Section 16
// Challenge 
#include "../headers/Account_Util.h"
#include "../headers/UI.h"

int main() {

int userSelect = 0;
std::vector<Account *> ptrToAccList;


//TODO: FIX WHY THIS LOOP ISN'T RUNNING MORE THAN ONCE
//USERSELECT GETS CHANGED TO 0 AFTER menuAction FOR SOME REASON
do{
    displayATMMenu();
    
    std::cin >> userSelect;

    std::cout << userSelect;

    menuAction(userSelect, ptrToAccList);

}while(userSelect != 0);

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

