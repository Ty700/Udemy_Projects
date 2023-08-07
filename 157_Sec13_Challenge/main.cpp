/* Prompt:
*  "For thie challenge you are to develop the foundation for a program for movie fanatics to keep 
*  track of what moveies they have watched and how many times they watched each movie.
*  The program mus support the following:
*  class Movie - models a movie which includes
*      - Movie name
*      - Movie rating
*      - The number of times the movie has been watched
*  class Movies - models a collection of movie objects (I renamed this to MoviesList since having two classes as Movie and Movies is terrible)
*      - Main can only interact with the Movies (MoviesList) class."
*/

#include "preprocessor_dirs.h"
#include "movie.h"
#include "movieList.h"

int main(){
    MoviesList list;
    char userInput;

    do{
        list.gatherInformation();
        list.displayList();
        std::cout << "Add another movie to the list?\nY - Yes\nN - No\n";
            std::cin >> userInput;
        toupper(userInput);
        while(userInput != 'Y' && userInput != 'N'){
            std::cout << "Error: Invalid choice.\nAdd another movie to the list?\nY - Yes\nN - No\n";
            std::cin >> userInput;
        }
        std::cin.ignore();
    }while(userInput != 'N');
}
