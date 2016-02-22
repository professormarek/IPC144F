/*
this program prompts the user for two integers (a numerator and denominator)
performs input validation: if the user fails to enter two integers,
display an error message and ask them again, until they properly enter two integers

NOTE: we'll use this as a chance to try out passing pointers as arguments to functions
*/

#include <stdio.h>

/*
this function repeatedly asks the user for two integers
and will keep asking them until they enter two proper integers
*/
void getIntegers(int *n, int *d ){
	//declare temporarly variables to hold user input
	int num, den;
	//stores how many integers the user properly entered
	int count = 0;
	//prompt the user
	printf("Enter two integers separated by a space: ");
	count = scanf("%d %d", &num, &den);
	printf("DEBUG: count of user input: %d\n", count);
	//write the values entered by the user into n and d
	*n = num;
	*d = den;
}


int main(void){

	//declare some variables - think about what the pieces of information are
	int numerator=0, denominator=0;
	int gcd = 0;
	//print the welcome message
	printf("Wecome to Greatest Common Divisor Calculator!!\n");
	//call a function to read the numerator and denonimator from the uesr's input
	//(think of a name for your function, and it's argumetn types)
	getIntegers(&numerator, &denominator);
	//display the numerator and denominator to the user
	printf("The greatest common divisor of %d and %d is %d\n", numerator, denominator, gcd);
}
