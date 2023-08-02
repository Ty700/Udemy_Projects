/*
*  A menu that has a few options: 
* 1. Add numbers to a list
* 2. Print the numbers on the list 
* 3. Add the numbers on the list and display result
* 4. Calculate the mean of the numbers on the list
* 5. Display the smallest or largest number in the list
*/

#include <iostream>
#include <string>
#include <vector>
#include <iomanip>

void printMenu();
void menuAction(const char &choice, std::vector<int> &list);

int main(){
    std::vector<int> list;
    char choice;
    do{
        printMenu();
        std::cin >> choice;
        menuAction(choice, list);
    }while(choice != 'Q' && choice != 'q');

}

void menuAction(const char &choice, std::vector<int> &list){
    switch(choice){
        
        case 'p':
        case 'P':
        {
            if(list.size() == 0){
                std::cout << "\nNo numbers in the list yet.\n\n";
                break;
            }
            std::cout << std::endl;
            for(auto index: list){
                std::cout << index << " ";
           }
            std::cout << "\n\n";
        break;
        }

        case 'a':
        case 'A':
        {  
            int number;
            std::cout << "\nEnter an integer that will be added to the list: ";
                std::cin >> number;
            list.push_back(number);
            std::cout << "\n" << number << " has been added to the list.\n\n";
        break;
        }

        case 'm':
        case 'M':
        {   
            if(list.size() == 0){
                std::cout << "Unable to calculate the mean - no data\n\n";
                break;
            }

            int mean{0};
            for(auto index: list){
                mean += index;
            }
            std::cout << "\nThe mean of the list is: " << std::fixed << std::setprecision(2) << static_cast<double>(mean) / list.size() << "\n\n";
        break;
        }
        
        case 's':
        case 'S':
        {   
            if(list.size() == 0){
                std::cout << "\nNo numbers in the list yet.\n\n";
                break;
            }
            int smallest_num = list.at(0);
            for(auto index: list){
                smallest_num = (smallest_num <= index) ? smallest_num : index;
            }
            std::cout << "\nThe smallest number in the list is: " << smallest_num << "\n\n";
        break;
        }

        case 'l':
        case 'L':
        {   
            if(list.size() == 0){
                std::cout << "\nNo numbers in the list yet.\n\n";
                break;
            }
            int largest_num = list.at(0);
            for(auto index: list){
                largest_num = (largest_num >= index) ? largest_num : index;
            }
            std::cout << "\nThe smallest number in the list is: " << largest_num << "\n\n";
        break;
        }

        case 'q':
        case 'Q':
        {
            std::cout << "\nGoodbye!";
            break;
        }

        default: 
            std::cout << "Invalid choice\n\n";
    }
}

void printMenu(){
    std::cout << "P - Print numbers\n" 
              << "A - Add a number\n" 
              << "M - Display mean of the numbers\n"  
              << "S - Display the smallest number\n" 
              << "L - Display the largest number\n" 
              << "Q - Quit\n\n";
}
