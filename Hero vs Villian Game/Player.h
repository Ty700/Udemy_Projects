#pragma once

#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h>

class Player{

public:
    Player(std::string name, int hp = 25)
        : name{name}, hp{hp} {}
    void setName(const std::string &name);    
    std::string getName();    
    void talk(std::string stringToSay);
    void checkIfDead();
    int getHP();
    void setHP(int hp);
    void attack(Player &victim);

private:
    std::string name;
    int hp{0};
    // int xp{0};
};
