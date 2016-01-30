/*
this program asks the user for a number
and tells the user whether it is even or odd
*/

#include <stdio.h>

int main(void){
	int input;
	printf("Enter a number: ");
	scanf("%d", &input);
	if(input % 2 == 0){
		printf("%d is even\n", input);
	}else{
		printf("%d is odd\n", input);
	}
	printf("PROGRAM COMPLETE\n");

}
