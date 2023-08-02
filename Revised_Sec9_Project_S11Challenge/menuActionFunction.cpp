#include "preprocessor_directives.h"

//Gathers the choice of the user
char getChoice(char &choice){
    std::cin >> choice;
}

//Displays the every number already in the list
void displayList(const std::vector<int> &list){
    if(list.size() == 0){
        std::cout << "\nNo numbers in the list yet.\n\n";
        }
        std::cout << std::endl;
    for(auto index: list){
        std::cout << index << " ";
    }
    std::cout << "\n\n";
}

//Inserts (Adds) a number to the back of the list
void insertNumberIntoList(std::vector<int> &list){
    int number;
    std::cout << "\nEnter an integer that will be added to the list: ";
        std::cin >> number;
    list.push_back(number);
    std::cout << "\n" << number << " has been added to the list.\n\n";
}

//Calculates and displays the mean of a list
void calculateMeanOfList(const std::vector<int> &list){
    if(list.size() == 0){
        std::cout << "Unable to calculate the mean - no data\n\n";
    }

    int mean{0};
    for(auto index: list){
        mean += index;
    }
    std::cout << "\nThe mean of the list is: " << std::fixed << std::setprecision(2) << static_cast<double>(mean) / list.size() << "\n\n";
}

//Displays the smallest number in the list
void calculateSmallestNumOfList(const std::vector<int> &list){
    if(list.size() == 0){
        std::cout << "\nNo numbers in the list yet.\n\n";
    }

    int smallest_num = list.at(0);
    for(auto index: list)
        smallest_num = (smallest_num <= index) ? smallest_num : index;
    
    std::cout << "\nThe smallest number in the list is: " << smallest_num << "\n\n";
}

//Displays the largest number in the list
void calculateLargestNumOfList(const std::vector<int> &list){
   if(list.size() == 0){
        std::cout << "\nNo numbers in the list yet.\n\n";
    }
        
    int largest_num = list.at(0);
    for(auto index: list){
        largest_num = (largest_num >= index) ? largest_num : index;
    }
        
    std::cout << "\nThe largest number in the list is: " << largest_num << "\n\n";
}
