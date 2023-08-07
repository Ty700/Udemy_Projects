#pragma once
#include "preprocessor_dirs.h"
#include "movie.h"

class MoviesList{
    public:
        void gatherInformation();
        void addMovieToList(Movie movieToAdd);
        void displayList();

    private:
        std::vector<Movie> collection;
};

