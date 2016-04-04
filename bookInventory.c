/*
This example opens a comma separated file of book ISBN,price
and reads it in to parallel arrays
finally it displays the result to the user
*/
#include <stdio.h>

/*
this function opens a file indicated by the filename string
and reads data into the arrays that are passed by address
recall arrays are ALWAYS passed by address
*/
void readBookInventory(const char filename[], int i[], float p[]){
	//open a file with the indicated filename 
	//for reading!
	//the only way we deal with files is through pointers to a FILE struct
	FILE *input = NULL;
	input = fopen(filename, "r");
	//create temporary variables to store one line of data from the file
	int tempInt = 0;
	float tempFloat = 0;
	//track how many things we have read out of the file
	int count = 0;

	//check whether the file was opened successfully
	if(input != NULL){
		//if the above condition was true, the file was opened sccessfully
		//use a loop and fscanf to read data from the open file
		while(fscanf(input, "%d,%f",&tempInt, &tempFloat ) == 2){
			//do something with the data we read using fscanf
			i[count] = tempInt;
			p[count] = tempFloat;
			count++;
		}

	}//optionally have an else statment to warn that the file wasn't there


}

int main(void){
	//declare parallel arrays to store isbn and price
	int isbn[10];
	float price[10];
	
	//use readBookInventory to read the file
	readBookInventory("bookInventory.csv", isbn, price);
	//print out the contents of the parallel arrays to ensure that our function works correctly
	int i;
	for(i = 0; i< 10; i++){
		printf("index:  %d, isbn: %d, price: %.2f\n", i, isbn[i], price[i]);
	}

}

