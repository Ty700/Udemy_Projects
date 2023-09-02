#include "Savings_Account.h"

int main(){
    Account a1(1000.0); //Creating account with 1000

    std::cout << a1 << std::endl;

    a1.deposit(500.0);  //1500 

    std::cout << a1 << std::endl;

    a1.withdrawl(1000.0);   //500

    std::cout << a1 << std::endl;

    a1.withdrawl(5000.0); //Insuff funds

//Savings Account

    Savings_Account s1{1000, 5.0};

    s1.deposit(1000); //2050 balance

    std::cout << s1 << std::endl;

    s1.withdrawl(2000); //2100 deposit

    std::cout << s1 << std::endl;

    s1.withdrawl(2000); //Insug funds

    std::cout << s1 << std::endl;


}