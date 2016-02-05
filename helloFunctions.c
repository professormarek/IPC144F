/*
the purpose of this program is to demonstrate some simple functions

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

int main(void){
	//call a function by writing its name followed by ()
	//provide arguments between the () if the function expects them
	welcome_message();	

}
