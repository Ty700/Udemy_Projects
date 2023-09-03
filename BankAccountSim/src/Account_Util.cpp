#include "../headers/Account_Util.h"

int getAccountType(){
        std::cout << "What type of account would you like to open:\n" 
              << "[1] Checking\n"
              << "[2] Savings\n"
              << "[3] Trust\n"
              << "[0] Cancel\n"; 
        
        int accountType{0};
        std::cin >> accountType;
    return accountType;
}

std::string getNameOfAccount(){
    std::string input;
    std::cout << "Enter a name for this account: \n";
        std::cin >> input;
    return input;
}

void createAccounts(std::vector<Account *> &ptrToAccList){    

    int accountType = getAccountType();
    std::string accountName = getNameOfAccount();

    switch (accountType) {
        //Checking
        case 0:
            break;
        case 1:
            ptrToAccList.push_back(new Checking_Account{accountName});
            break;
        default:
            std::cout << "Invalid Option.\n";
        break;
    }

}

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
        i->withdraw(amount);
    }
    displayAll(acc);
}

