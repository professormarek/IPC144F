/*
this program will demonstrate a simple calulation without needing to use memory addresses
we will demonstrate declaring a pointer variable
initializing it
and displaying the memory address
*/
#include <stdio.h>

int main(void){
	int x, y; //we can declare multiple variables on one line by separating them with commas
	int z;
	//declare a pointer to an integer recall: pointers store memory addresses
	//always remember to initialize pointers
	int *my_ptr = NULL;

	//simple calculation
	x = 2;
	y = 5;
	z = x + y;
	printf("the value of z is %d\n", z);
	//get the address of variable z and store that address in my_ptr
	my_ptr = &z;
	printf("the memory address of variable z is: %p\n", my_ptr);
	printf("the memory address of variable y is: %p\n", &y);
	printf("the memory address of variable z is: %p\n", &x);

	//use the dereferencing operator to access the value stored at a pointer address
	printf("Accessing the value of my_ptr : %d\n", *my_ptr); 

	//always remember to:
	return 0;
}

