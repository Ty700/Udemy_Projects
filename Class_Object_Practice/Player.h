#pragma once

#include <iostream>
#include <string>

class Player{

public:
    void setName(const std::string &name);    
    std::string getName();    
    void talk(std::string stringToSay);
    bool isDead();
    int getHP();
    void setHP(int hp);

private:
    std::string name;
    int hp{100};
    int xp{0};
};
