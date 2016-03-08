#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* using define lets us change the difficulty of the game easily
it's easier to change one value here, than fishing through your code for
specific numbers
*/

#define MONSTER_MIN_HEALTH 5
#define MONSTER_MAX_HEALTH 9
#define MONSTER_MIN_DAMAGE 3
#define MONSTER_MAX_DAMAGE 5

#define PLAYER_MAX_HEALTH 20 

//cap the number of player potions at this number
#define MAX_POTIONS 5

//for now fix the player's name
#define PLAYER_NAME "Hero"
#define MONSTER_NAME "Hobbit"

#define TRUE 1
#define FALSE 0

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

/* I made a quick placeholder menu for you that also displays player health and potions 
the current player health and potions are passed through the health and potions arguments*/
void displayMenu(int health, int potions){
        printf("placeholder menu for you\n");
        printf("current health: %d current potions: %d\n", health, potions);
        printf("Press 1 to fight the monster\n2 to use a potion (if available!)");
        printf("\nPress 3 to run (quit the game):\n");

}
/*a function that displays a message appropriate for when the player wins the combat*/
void winningMessage(void){

        printf("PKACEHOLDER PLAYER WINS\n");
}

/*a function that displays a message appropriate for when the player loses the combat*/

void losingMessage(void){
        printf("PKACEHOLDER PLAYER LOSES\n");

}

/*a function that displays the end screen.*/

void gameOverMessage(void){

        printf("PLACEHOLDER GAME OVER\n");

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

/* this function accepts two integers, a minimum and a maximum
and will return a random ingeter between the minimum and maximum
*/
int getRandomInteger(int a, int b){
	//n is the randomly selected number, see notes on Library Functions
	int n = a + rand() % (b + 1 - a);
	return n;
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
	//keep track of how many potions the player has
	int playerPotions = 0;
	//store the user's menu choice
	int userChoice = 0;
	//use this to quit the game if the player runs
	int gameOver=FALSE;//set this to true later

	/*this call to srand function (stdlib.h) makes for a differnt outcome 
	each time. comment out the next line if you want your program to
	behave the same way each time!*/
	srand(time(0));

	//call a no-argument (void) function by name, with empty braces
	//display the welcome message
	welcome();	
	//get the initial health for the hero
	//functions are cool, because they can be reused
	printf("What is the hero's initial health?:\n");
	playerHealth = getUserInteger(1, PLAYER_MAX_HEALTH);
	printf("DEBUG: player chose to have %d initial health\n", playerHealth); 
	//ask the user how many potions they want
	printf("How many potions does the hero have?:");
	playerPotions = getUserInteger(0, MAX_POTIONS);
	//TODO: get hero's minimum and maximum damage

	//tell the user that they are figting a monster right now
	printf("You are fighting a ");
	printf(MONSTER_NAME);
	printf(", look out!!\n"); 	

	//initialize the monster's health to be a random number in the range
	monsterHealth = getRandomInteger(MONSTER_MIN_HEALTH,MONSTER_MAX_HEALTH);
	printf("DEBUG: randomly selected monster health %d\n", monsterHealth);

	//combat continues until monster or player health reaches 0
        while(playerHealth > 0 && monsterHealth > 0 && gameOver==FALSE){
                displayMenu(playerHealth, playerPotions);
                //get the user's menu choice
                userChoice = getUserInteger(1,3);
                printf("DEBUG: users's choice was: %d\n", userChoice);
                /*hint: here you should use if, else if, and else statements to do something based on the user's menu choice */
        }

	gameOverMessage();

}

