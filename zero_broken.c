/*
this program attempts to write a function that accepts a variable and sets 
that variable's value in main() to zero -> 0
note: this version doesn't work properly

this example introduces the idea of showing function headers (declaration) before main
the implementations or definitions after main
*/

#include <stdio.h>

//this is the function header/declaration for the zero function
//all it's doing is telling the compiler that it will find the zero function defintion later in the file
void zero(int num);

int main(void){
	int x = 5;
	printf("the value of x before calling zero(x) is: %d\n", x);
	zero(x);
	printf("the value of x after calling zero(x) is: %d\n", x);
	return 0;
}

//because we declared the function above, we can defer the implementation until this point in the file
void zero(int num){
	num = 0;
}


