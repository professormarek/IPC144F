/*
this sample program introduces us to doing some simple things with strings
*/
#include <stdio.h>
//strlen comes from the string.h library
#include <string.h>

/*
saveMessage opens the file indicated by fileName for writing
and writes the message to the file indicated by fileName
recall: const is a promise that your function won’t alter the contents of the array (or variable)
*/
void saveMessage(const char fileName[], const char message[]){
	//your implementation here
}

int main(void){
	//declare and initalize a string of size 100
	//remember that initialization using = will insert that terminating null (0) for you
	char text[100] = "this is the default text";

	//we can use printf with the %s conversion specifier to display the string
	printf("our string is initially: -> %s <- \n", text);

	//using our own loop we can iterate through the string and print out the ascii
	//code of each character (just for our own understanding)
	//we're purposely not stopping at the null
	printf("The ascii codes of each character in the string are: \n");
	int i;
	for(i = 0; i < 100; i++){
		printf(" %d ", text[i]);
	}
	printf("\n");

	//next allow the user to enter a string
	printf("Enter text 99 characters or less: ");
	/*
	in the conversion character used here, 99 limits the input to 99 characters
	and the [^\n] part will get scanf to stop reading characters when it reaches
	the newline. the \n itself is left in the buffer and is not copied into the string
	(don't forget to clear the input buffer!)
	note the space between the " % this space tells scanf to discard any whitespace at the start of the user input
	*/
	scanf(" %99[^\n]",text); 
	
	printf("The user entered: %s\n", text);
	//display the length of the entered string for the user
	//use the library function to compute the length
	int textLength = strlen(text);
	printf("the length of the string entered by the user is: %d\n", textLength);

	saveMessage("data.txt", text);
	
	return 0;

}
