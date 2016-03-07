#include <stdio.h>

/* using define lets us change the difficulty of the game easily
it's easier to change one value here, than fishing through your code for
specific numbers
*/

#define MONSTER_MIN_HEALTH 5
#define MONSTER_MAX_HEALTH 9
#define MONSTER_MIN_DAMAGE 3
#define MONSTER_MAX_DAMAGE 5 

//cap the number of player potions at this number
#define MAX_POTIONS 5

//for now fix the player's name
#define PLAYER_NAME "Hero"
#define MONSTER_NAME "Hobbit"

/* a function that returns no value, and accepts no arguments
it displays a welcome screen
*/
void welcome(void){
	printf("WELCOME TO HEROES AND MONSTERS!!\n Prepare to do battle...\n");
}



/*
main function - implements combat (a battle) between a monster and a hero 
*/
int main(void){
	//a character is slain when its health reaches 0 (or less)
	int playerHealth =0;
	int monsterHealth=0;
	//these affect how much damage characters do to one another
	int playerMinimumDamage = 0;
	int playerMaxiumumDamage = 0;

	//call a no-argument (void) function by name, with empty braces
	//display the welcome message
	welcome();	

}

