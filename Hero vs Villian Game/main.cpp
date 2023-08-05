#include "Player.h"

int main(){
    
    Player *Hero = new Player{"Tyler"};
    Player *Enemy = new Player{"Ghoul"};

    Hero->talk("Scary Ghoul spotted!\n");
    Enemy->talk("You're all mine!\n");

    do{
    _sleep(1000);
    //Hero did an "attack" on the enemy
    Hero->attack(*Enemy);
        if(Enemy->getHP() < 0){
            break;
        }
    _sleep(1000);
    //Enemy's turn
    Enemy->attack(*Hero);
    }while(Hero->getHP() > 0 && Enemy->getHP() > 0);
    
    delete Hero, Enemy;
}
