#include "preprocessor_directives.h"
#include "displayMenu.cpp"
#include "menuAction.cpp"

int main(){
    std::vector<int> list;
    char choice;
    do{
        //Displays the menu to the user
        displayMenu();
        
        //Gets the menu action the user wants to preform
        getChoice(choice); //in "menuActionFunctions.cpp"

        //Completes the action the user wants
        menuAction(choice, list);
    }while(choice != 'Q' && choice != 'q');

}

