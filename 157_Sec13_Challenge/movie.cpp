#include "movie.h"

std::string Movie::getMovieName(){
    return movieName;
}

void Movie::setMovieName(){
    std::string movieNameInput;
    std::cout << "Enter the movie you have watched: " << std::endl;
        std::getline(std::cin, movieNameInput);
    this->movieName = movieNameInput;
}

std::string Movie::getRatingOfMovie(){
    return ratingOfMovie;
}

void Movie::setRatingOfMovie(){
    std::string ratingInput;
    std::cout << "Enter the rating for " << movieName << ":\n";
        std::getline(std::cin, ratingInput);
    this->ratingOfMovie = ratingInput;
}

int Movie::getTimesWatched(){
    return timesWatched;
}

void Movie::setTimesWatched(){
    int timesWatchedInput;
    std::cout << "How many times have you watched " << movieName << ":\n" ;
        std::cin >> timesWatchedInput;
        std::cin.ignore();
    this->timesWatched = timesWatchedInput;
}

void Movie::displayMovie(){
    std::cout << getMovieName() << ":\n"
                            << "\tRating: " << getRatingOfMovie()
                            <<"\n\tTimes watched: " << getTimesWatched() << std::endl
                            << std::endl;  
}
