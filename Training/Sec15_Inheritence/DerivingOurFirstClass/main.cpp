#include "Account.h"
#include "Savings_Account.h"

int main(){

Account acc{};

acc.deposit(2000.0);
acc.withdrawl(2000.0);

std::cout << std::endl;

Account *p_acc{nullptr};

p_acc = new Account();

p_acc->deposit(1000.0);
p_acc->withdrawl(1000.0);


Savings_Account sav_ac{};

sav_ac.deposit(2000.0);
sav_ac.withdrawl(500.0);

std::cout << std::endl;

Savings_Account *p_sav_acc{nullptr};

p_sav_acc = new Savings_Account();

p_sav_acc->deposit(1000.0);
p_sav_acc->withdrawl(500.0);

delete p_acc;
delete p_sav_acc;



}