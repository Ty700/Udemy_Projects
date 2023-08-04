#include <iostream>
#include <string>


#include "Player.cpp"
//include "Player.h" - Errors with this and not .cpp? 
//However it says that we should never include .cpp files, rather grab the .h instead, yet it doesn't work? 
int main(){
    //Stack obj
    Player Tyler;
    Tyler.setName("Tyler");
    Tyler.talk("Scary Ghoul spotted!\n");

    //Heap obj
    Player *enemy = new Player;
    enemy->setName("Ghoul");
    enemy->setHP(25);
    
    //need to use -> for heap. -> = (*enemy).method();
    enemy->talk("You're all mine!\n");

    enemy->setHP(enemy->getHP() - 25);

    //Did an "attack" on the enemy
    std::cout << Tyler.getName() << " attacked " << enemy->getName() << " and now the enemy's health is: " << enemy->getHP() << std::endl;

    //will always be 0, but later I will add a random number 0-25 that will be the "attack" on the enemy and the health will not always = 0.
    if(enemy->isDead()){
        std::cout << "Ghoul collapeses and appears dead.";
    } else {
        std::cout << "Is that all you got?";
    }

    delete enemy;
}
