#include "preprocessor_directives.h"
#include "menuActionFunction.cpp"

void menuAction(const char &choice, std::vector<int> &list){
    switch(choice){
        
        case 'p':
        case 'P':
        {
            displayList(list);
            break;
        }

        case 'a':
        case 'A':
        {  
            insertNumberIntoList(list);
            break;
        }

        case 'm':
        case 'M':
        {   
            calculateMeanOfList(list);
            break;
        }
        
        case 's':
        case 'S':
        {   
            calculateSmallestNumOfList(list);
            break;
        }

        case 'l':
        case 'L':
        {   
            calculateLargestNumOfList(list);
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
