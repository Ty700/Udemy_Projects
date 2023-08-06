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

void Player::attack(Player *attacker, Player *victim){
    srand(time(NULL));
    int attackAmount = rand() % 26;
    victim->setHP(victim->getHP() - attackAmount);
    if(victim->getHP() > 0){
        //std::cout << name << " attacked " << victim->getName() << " for " << attackAmount << " and now " << victim->getName() << "'s health is: " << victim->getHP() << std::endl;
        std::cout << attacker->getName() << " attacked " << victim->getName() << " for " << attackAmount << " and now " << victim->getName() << "'s health is: " << victim->getHP() << std::endl;
    } else {
        //std::cout << name << << " attacked " << victim->getName() << " for " << attackAmount << " and killed them " << std::endl;
        std::cout << attacker->getName() << " attacked " << victim->getName() << " for " << attackAmount << " and killed them " << std::endl;
        delete victim, attacker;
    }
}
