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
                printf("Enter an integer between %.2lf and %.2lf: ", minimum, maximum);
                //validate the input
                scanf("%lf", &userInput);
                clearBuffer();
        }
        return userInput;
}

/*
a debugging function that displays everything in the inventory
accepts as arugments 3 arrays (isbn, price, quantity)
and also need to pass the number of things in the arrays as well

this function is an example of passing arrays to a function
*/
void debugDisplayArrays(int i[], double p[], int q[], int size){
	int j;//remember we've already used the name i for the array i[]
	for(j = 0; j < size; j++){
		printf("DEBUG: book %d, isbn: %d, price: %.2lf, quantity: %d\n", j, i[j], p[j], q[j]);
	}
}

/*
this function searches the isbn array for the given isbn and returns the price of that book if found
if the book is not found, print an error message and return 0.0 as the price

I went ahead and implemented it for you, just call it from main - marek

*/
double searchPrice(int isbn_to_find, int i[], double p[], int count){
	int j;
	for(j = 0; j < count ; j++){
		if(i[j] == isbn_to_find){
			//if the condition above is true, we have found the book!
			//so return the price (from the price array named p)
			return p[j];			
		}
	}
	//if we didn't hit the return statement above we'll reach this point
	printf("WARNING: ISBN %d not found!\n", isbn_to_find);
	//return a price of 0.0 as specified
	return 0.0;
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
	double userInputDouble = -1;
	//stores how many books the user has entered
	int book_count = 0;

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
		if(userInputInt != 0 ){
			//store the ISBN in the isbn array
			isbn[book_count] = userInputInt;
			//ask for the price
			printf("Price: ");
			userInputDouble = getUserDouble(0.01, 1000000.0);
			//store the user's double inside the price array
			price[book_count] = userInputDouble;
			//ask for the quantity
			printf("Quantity: ");
			userInputInt = getUserInteger(0, 100);
			//keep track of the number of books entered
			book_count++;
		}
	}
	//the user is done entering books. 
	//display the inventory for debugging purposes
	debugDisplayArrays(isbn, price, quantity, book_count);		

	//write a second loop to prompt the user for ISBN's to search for
	
	//call the searchPrice function to search for and display the price of each book

}
