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

/*
this functoin clears the buffer
*/
void clearBuffer(void){
	//variable to store the next character in the buffer
	char c=0;
	while(c != '\n'){
		c = getchar();
	}
}

/* a function that returns no value, and accepts no arguments
it displays a welcome screen
*/
void welcome(void){
	printf("WELCOME TO HEROES AND MONSTERS!!\n Prepare to do battle...\n");
}

/* this function accepts two integer arguments and validates user inpute to 
ensure that the user enters a number between the two arguments
once the input is validated, this function returns the users's choice as an 
integer

the arugments are listed between the ( ). They can be thought of as
variables that are only available inside the { }
when the fucntion is called, these arguments take on the values passed from the 
calling function (ex. from main() )
*/
int getUserInteger(int minimum, int maximum){
	//choose an invalid initial value for the user input
	int userInput = minimum - 1;
	/*the || operator means "OR" - it can be used to combine simple 
	conditions into more complicated conditions */
	while(userInput < minimum || userInput > maximum){
		//ask the user to enter a number within the range
		printf("Enter an integer between %d and %d: ", minimum, maximum);
		//validate the input
		scanf("%d", &userInput);
		clearBuffer();		
	}
	return userInput;
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
	//get the initial health for the hero
	//functions are cool, because they can be reused
	printf("What is the hero's initial health?:\n");
	playerHealth = getUserInteger(1, 20);
	printf("DEBUG: player chose to have %d initial health\n", playerHealth); 
}

