#include "Player.h"

void Player::setName(const std::string &name){
    this->name = name;
}

std::string Player::getName() {
    return name;
}

void Player::setHP(int hp){ 
    this->hp = hp; 
}

int Player::getHP(){ 
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
