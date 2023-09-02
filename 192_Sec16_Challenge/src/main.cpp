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

    Account *checking_acc1 = new Checking_Account();
    
    std::cout << *checking_acc1 << std::endl;

    return 0;
}

