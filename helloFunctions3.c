/*
the purpose of this program is to demonstrate some simple functions
VERSION 3
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

/*
this function is an example of a function that accepts some arguments (information)
it will compute and return the result of the base raised to the exponent
*/
int power(int base, int exponent){
	//this variable will store the result of raising base to exponent
	int result = 1;
	//variable to control the loop
	int i = 0;
	for(i = 0; i < exponent; i++){
		printf("DEBUG: in the loop, i is %d, base is %d, exponent is %d, result is %d\n", i, base, exponent, result);
		result = result * base;
		printf("after multiplying, result is now: %d\n", result);
	}
	//at the end of any function that computes a value
	//you need to specify which variable to return as the computed result
	//in this case the name of our variable is "result"
	//use the return keyword followed by the name of the variable
	return result;
	
}


int main(void){
	//a variable to store the result of the exponentiation
	int answer;

	//call a function by writing its name followed by ()
        //provide arguments between the () if the function expects them
        welcome_message();
        //eventually our program will do some stuff

	//call the power function with the correct number of arguments
	//assign (store the value) of the result in the "answer" variable
	//ex. 2 raised to the power of 3
	answer = power(2,3);
	printf("Two raised to the power of three is: %d\n", answer);

	//print our goodbye message 
	goodbye_message(5);
	
}
