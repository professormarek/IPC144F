/*
the purpose of this program is to demonstrate some simple functions

*/

#include <stdio.h>

/*
this function displays a simple welcome message
*/
void welcome_message(void){
	printf("Welcome to the program.\n");
	printf("It doesn't do much right now\n");
	printf("But stay tuned!\n");
}

/*
this function accepts a piece of information as an argument
it doesn't return any result
it will print out the goodbye message count  number of times
*/
void goodbye_message(int count){
	//this variable is for the loop condition
	int i=0;
	//print the message out 
	while(i < count){
		printf("Goodbye!\n");
		i++;
		//printf("DEBUG: i is %d count is: %d\n",i,count);
	}
}


int main(void){
	//call a function by writing its name followed by ()
	//provide arguments between the () if the function expects them
	welcome_message();	
	//eventually our program will do some stuff

	//print our goodbye message 
	goodbye_message(5);
	
}
