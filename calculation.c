/*
This is a multi line comment
everything between the slash-star and the star-slash below are ignored

This program asks the user to enter two integers
it will compute the sum of the integers
and display the result to the user
*/

#include <stdio.h>

int main(void){
	//declare variables
	//first number
	int a = 0;
	//second number
	int b = 0 ;
	//store the result
	int sum = 0;
	
	//get the first and second number from the user
	//prompt the user to enter the first number
	printf("Enter the first number: ");
	//copy the data into the variable
	scanf("%d", &a);
	//prompt the user to enter the second number
	printf("Enter the second number: ");
	//copy the data into the variable
	scanf("%d", &b);

	//compute the result
	sum = a + b;
	//display the result to the user
	printf("The sum of the two numbers is: %d\n", sum);
}
