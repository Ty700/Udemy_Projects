#pragma once
#include "preprocessor_dirs.h"
#include "Account_Util.h"
//Displays menu
void displayATMMenu();

//Returns user input
// void captureInput(int &userSelect);

//Calls the correct function that corresponds with the user input
void menuAction(int userSelect, std::vector<Account *> &ptrToAccList);