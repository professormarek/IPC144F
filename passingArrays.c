#include <stdio.h>

/*
this function demonstrates that arrays are in fact always passed by address
we know this because when we make changes to the array in this function
the changes are reflected in the original array in main!

NOTE: this means that when we pass arrays of struct objects to a function
that function can make changes to the original objects 
*/
void changeArray(int a[], int size){
	//change the array by setting all elements to 0
	int i;
	for(i = 0; i < size; i++){
		a[i] = 0;
	}
}

int main(void){
	//let's declare an array to play with
	int test[4] = {1,2,3,4};
	int i;
	//display the array
	for(i = 0; i < 4; i++){
		printf("test index %d is %d\n", i, test[i]);
	}
	//pass it to a function that tries to change the values in the array
	changeArray(test, 4);
	printf("After calling changeArray:\n");
	//print out the array again
	for(i = 0; i < 4; i++){
                printf("modified? test index %d is %d\n", i, test[i]);
        }
		
}
