/*
this program prompts the user for two integers (a numerator and denominator)
performs input validation: if the user fails to enter two integers,
display an error message and ask them again, until they properly enter two integers

NOTE: we'll use this as a chance to try out passing pointers as arguments to functions
*/

#include <stdio.h>

/*
this functoin clears the buffer
*/
void clearBuffer(void){
	//variable to store the next character in the buffer
	char c=0;
	while(c != '\n'){
		c = getchar();
		//for debugging purposes, print out c
		printf("DEBUG: discarded character in buffer: %c ASCII code: %d\n", c, c);
	}
}

/*
this function computes the gcd of two integers
the return value is the gcd (a and b are the two numbers for which we are finding the gcd)
*/
int findGCD(int a, int b){
	//declare a loop control variable
	int i = 0;
	//delcare a variable to store our best guess at the gcd
	int gcd = 1;
	for(i = 1; i <= a; i++){
		//check to see if i divides both a and b
		//if it does, it's our best guess at the gcd
		if(a % i == 0 && b % i == 0){
			gcd = i;
		}
	}

	//at the end of the for loop, gcd will contain the gcd of a and b
	//how to return it to main?
	return gcd;
}



/*
this function repeatedly asks the user for two integers
and will keep asking them until they enter two proper integers
*/
void getIntegers(int *n, int *d ){
	//declare temporarly variables to hold user input
	int num=0, den=0;
	//stores how many integers the user properly entered
	int count = 0;
	//prompt the user
	printf("Enter two integers separated by a space: ");
	while(count != 2 ) {
		count = scanf("%d %d", &num, &den);
		clearBuffer();
		printf("DEBUG: count of user input: %d\n", count);
		//if the user didn't enter two integers show them a warning
		if(count != 2 ){
			//show the error message and new prompt
			printf("Error: Please enter two integers separated by a space: ");
		}
	}
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
	
	//TODO: use your findGCD function to compute the gcd (store in the gcd variable)

	printf("The greatest common divisor of %d and %d is %d\n", numerator, denominator, gcd);
}
