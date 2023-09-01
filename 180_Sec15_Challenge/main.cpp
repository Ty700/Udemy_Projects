// Section 15
// Challenge 
#include <iostream>
#include <vector>
#include "headers/Account.h"
#include "headers/Checking_Account.h"
#include "headers/Savings_Account.h"
#include "headers/Trust_Account.h"
#include "headers/Account_Util.h"


using namespace std;

int main() {
    cout.precision(2);
    cout << fixed;
   
    // Accounts
    vector<Account> accounts;
    accounts.push_back(Account {});
    accounts.push_back(Account {"Larry"});
    accounts.push_back(Account {"Moe", 2000} );
    accounts.push_back(Account {"Curly", 5000} );
    
    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts,2000);
    
    // Savings 

    vector<Savings_Account> sav_accounts;
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );

    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts, 2000);


    // Checking 

    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {} );
    check_accounts.push_back(Checking_Account {"Check_Uno"} );
    check_accounts.push_back(Checking_Account {"Check_Dos", 2000} );
    check_accounts.push_back(Checking_Account {"Check_Tres", 5000} );

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust 
    
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {} );
    trust_accounts.push_back(Trust_Account {"Trust_Uno"} );
    trust_accounts.push_back(Trust_Account {"Trust_Dos", 2000} );
    trust_accounts.push_back(Trust_Account {"Trust_Tres", 5000, 5.0} );

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    deposit(trust_accounts, 5000); //Activates bonus
    withdraw(trust_accounts, 50.50);
    withdraw(trust_accounts, 50);
    withdraw(trust_accounts, 50);
    withdraw(trust_accounts, 50); // Should fail this one since it's the 4th withdrawl

    trust_accounts.push_back(Trust_Account {"Trust_Cuatro", 100, 0.0}); //new account to test 20% rule

    //Accounts 1-3 should fail since they're over 3 withdrawls and 4 should fail this one since it's over 20%
    withdraw(trust_accounts, 25); 
    return 0;
}

