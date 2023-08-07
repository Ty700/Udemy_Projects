#pragma once
#include "preprocessor_dirs.h"

class Movie {
    public:
    std::string getMovieName();
    void setMovieName();

    std::string getRatingOfMovie();
    void setRatingOfMovie(); 

    int getTimesWatched();
    void setTimesWatched();

    void displayMovie();

    Movie()
        : Movie("None", "None",0) {}
    
    Movie(std::string name) 
        : Movie{name, "None",0} {}
    
    Movie(std::string name, std::string rating) 
        : Movie(name, rating, 0) {}
        
    Movie(std::string name, std::string rating, int num)
            : movieName{name}, ratingOfMovie{rating}, timesWatched{num} {}

    private:
    std::string movieName;
    std::string ratingOfMovie;
    int timesWatched;
    

};
