#include "Player.h"
#include "Game.h" 

void playGame(){
    Player *Hero = new Player{"Tyler"};
    Player *Enemy = new Player{"Ghoul"};

    Hero->talk("Scary Ghoul spotted!\n");
    Enemy->talk("You're all mine!\n");

    do{

    _sleep(1000);
    //Hero attacks enemy
    Hero->attack(Hero, Enemy);

    //checks if enemy is dead
        if(Enemy->getHP() < 0){
            break;
        }

    _sleep(1000);
    //Enemy's turn
    Enemy->attack(Enemy, Hero);
    }while(Hero->getHP() > 0 && Enemy->getHP() > 0);
}
