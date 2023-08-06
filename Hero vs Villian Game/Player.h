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
    int getHP();
    void setHP(int hp);
    void attack(Player *attacker, Player *victim);
    // ~Player(){
    //     std::cout << "Destructor called";
    // }

private:
    std::string name{"None"};
    int hp{0};
    // int xp{0};
};
