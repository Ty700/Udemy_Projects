#pragma once
#include "Player.h"

void Player::setName(const std::string &name){
    this->name = name;
}

inline std::string Player::getName() {
    return name;
}

inline void Player::setHP(int hp){ 
    this->hp = hp; 
}

inline int Player::getHP(){ 
    return hp; 
}

void Player::talk(std::string stringToSay){
    std::cout << name <<": " << stringToSay << std::endl;
}

bool Player::isDead(){
    if(Player::getHP()){
        return false;
    } else {
        return true;
    }
}
