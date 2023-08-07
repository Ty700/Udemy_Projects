#include "movieList.h"

void blank(){
    for(int i{0}; i < 25; i++){
        std::cout << "\n";
    }
}

void MoviesList::gatherInformation(){
    Movie currentMovie;

    currentMovie.setMovieName();

    //Is the list empty? If not check if movie name entered is not already in list
    if(collection.size() > 0) {
        for(int i{0}; i < collection.size(); i++){
            if(currentMovie.getMovieName() == collection.at(i).getMovieName()){
                blank();
                std::cout << "Error: Movie is already in the list\n\n";
                break;
            }
            if (i == collection.size() - 1){
                currentMovie.setRatingOfMovie();
                currentMovie.setTimesWatched();
                addMovieToList(currentMovie);
                blank();
                break;
            }
        }
    } else { //List is empty - skips check
        currentMovie.setRatingOfMovie();
        currentMovie.setTimesWatched();
        addMovieToList(currentMovie);
        blank();
    }
}

void MoviesList::addMovieToList(Movie movie){
    // std::cout << movie.getMovieName() << " has been added to the list\n";
    collection.push_back(movie);
}

//Displays all the movies in the list
void MoviesList::displayList(){
    for(int i{0}; i < collection.size(); i++){
        collection.at(i).displayMovie();
    }
}
