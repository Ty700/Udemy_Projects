#include "include.h"
#include "displayMenu.cpp"
#include "menuAction.cpp"

int main(){
    std::vector<int> list;
    char choice;
    do{
        displayMenu();
        std::cin >> choice;
        menuAction(choice, list);
    }while(choice != 'Q' && choice != 'q');

}

