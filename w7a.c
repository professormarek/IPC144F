#include <stdio.h>

#define MAX_BOOKS 10000

/*
this function clears the buffer
*/
void clearBuffer(void){
	//variable to store the next character in the buffer
	char c=0;
	while(c != '\n'){
		c = getchar();
	}
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
this function does the same thing as getUserInteger but with the double type
*/
double getUserDouble(double minimum, double maximum){
        //choose an invalid initial value for the user input
        double userInput = minimum - 1;
        /*the || operator means "OR" - it can be used to combine simple
        conditions into more complicated conditions */
        while(userInput < minimum || userInput > maximum){
                //ask the user to enter a number within the range
                printf("Enter an integer between %lf and %lf: ", minimum, maximum);
                //validate the input
                scanf("%lf", &userInput);
                clearBuffer();
        }
        return userInput;
}





/*
this program gets a bookstore inventory from the user
and stores it in "parallel" arrays - meaning that
we have multiple arrays, and each array holds a different
piece of information about the book at that index
after entering the books, it allows the user to search for books
and retrieve their price
*/
int main(void){
	//declare parallel arrays to store book information
	//one array to store isbn
	int isbn[MAX_BOOKS];
	//one array to store prices
	double price[MAX_BOOKS];
	//one array to store quantities
	int quantity[MAX_BOOKS];
	//this variable stores a user input integer
	int userInputInt = -1;


	printf("welcome to bookstore inventory for books dot com\n");
	printf("================================================\n");

	//prompt the user to enter ISBN's until 0 is entered
	while(userInputInt != 0 ){
		//prompt the user for ISBN
		printf("Enter a book starting with ISBN (0 to finish):");
		printf("ISBN: ");
		//get the integer
		userInputInt = getUserInteger(0, 9999);
		printf("DEBUG: user entered: %d\n", userInputInt);
	}

}
