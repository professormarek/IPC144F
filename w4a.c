/*
This program is a math tutoring program
it will give the user a choice of mathematical functions
it will then ask for input numbers
and show the result to the user 
(depending on the function chosen, and input numbers)
TODO: improve the description
*/

#include <stdio.h>

/*
this function accepts an integer argument and returns an integer
that will be 0 if the number is not prime, and 1 if the number is prime
*/
int is_prime(int number){
	int result = 1; //assume that number is prime to begin with
	int i; // i is the loop control variable
	for(i = 2; i < number; i++){
		if(number % i == 0){
			result = 0; // that means that number is not prime
		}
	}
	return result;
}

int main(void){
	char choice = 0;//this holds the user's menu choice
	int user_int = 0; // holds integer input from the user
	int result_int = 0; //holds integer results to show the user some output
	printf("Welcome to Math Calculator!!!\n");
	while(choice != 'q' ){
		//present the menu
		printf("Please enter a choice: ! for factorial, e for pow(e)r, f for (f)ibonacci, p for (p)rime, q to (q)uit:");
		//get the user's choice
		scanf(" %c", &choice); //whenever using %c put a space out front " %c" to consume whitespace
		//an if statement, that looks at the current choice, and does something different, depending
		if(choice == 'q' ){
			printf("Thakns for using Math Claculator! Goodbye!\n");
		}else if(choice == 'p' ){
			//get an integer from the user
			printf("Enter a positive integer:");
			scanf("%d", &user_int);
			result_int = is_prime(user_int);
			if(result_int == 1){
				printf("%d is prime\n", user_int);
			} else {
				printf("%d is NOT prime\n", user_int);
			}			
		}
	}
	return 0;//0 indicates the program terminated correctly

}

