/*
See README for info about this challenge

Expected Output:
                    Tour Ticket Prices from Miami

Country             City                     Population          Price
----------------------------------------------------------------------
Colombia            Bogota                      8778000         400.98
                    Cali                        2401000         424.12
                    Medellin                    2464000         350.98
                    Cartagena                    972000         345.34
Brazil              Rio De Janiero             13500000         567.45
                    Sao Paulo                  11310000         975.45
                    Salvador                   18234000         855.99
Chile               Valdivia                     260000         569.12
                    Santiago                    7040000            520
Argentina           Buenos Aires                3010000         723.77


*/

#include <iostream>
#include <iomanip>
#include <vector>

struct City {
    std::string name;
    long population;
    double cost;
};

struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours{
    std::string title;
    std::vector<Country> countries;
};


int main()
{   
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    //Saving default state of cout
    std::ios init(NULL);
    init.copyfmt(std::cout);
    
    const int totalWidth{70};
    const int countryWidth{20};
    const int cityWidth{20};
    const int popWidth{15};
    const int costWidth{15};
    const int centerTitle{49};
    const std::string title{"Tour Ticket Prices from Miami"};
    
    //Title
    std::cout << std::setw(centerTitle) << title << std::endl << std::endl;

    std::cout << std::setw(countryWidth) << std::left << "Country" 
              << std::setw(cityWidth) << std::left << "City"
              << std::setw(popWidth) << std::right << "Population"
              << std::setw(costWidth) << std::right << "Price" << std::endl;
    std::cout << std::setfill('-') << std::setw(totalWidth) << "" << std::endl;

    //reset cout to default
    std::cout.copyfmt(init);

    for(Country country : tours.countries){
        for(size_t i = 0; i < country.cities.size(); i++){
            //Only need country name once. Thus checks if it's the first time running through for loop
            std::cout << std::setw(countryWidth) << std::left << ((i == 0) ? country.name : "")
                      << std::setw(cityWidth) << std::left << country.cities.at(i).name
                      << std::setw(popWidth) << std::right << country.cities.at(i).population
                      << std::setw(costWidth) << std::right << country.cities.at(i).cost
                      << std::endl;
        }
    }
    return 0;
}