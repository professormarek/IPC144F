/*
This program is a math tutoring program
it will give the user a choice of mathematical functions
it will then ask for input numbers
and show the result to the user 
(depending on the function chosen, and input numbers)
TODO: improve the description
*/

#include <stdio.h>

int main(void){
	char choice = 0;
	printf("Welcome to Math Calculator!!!\n");
	while(choice != 'q' ){
		//present the menu
		printf("Please enter a choice: ! for factorial, e for pow(e)r, f for (f)ibonacci, p for (p)rime, q to (q)uit:");
		//get the user's choice
		scanf(" %c", &choice); //whenever using %c put a space out front " %c" to consume whitespace
		//an if statement, that looks at the current choice, and does something different, depending
		if(choice == 'q' ){
			printf("Thakns for using Math Claculator! Goodbye!\n");
		}
	}

}

