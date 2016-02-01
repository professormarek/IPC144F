#include <stdio.h>

int main(void){
	int response=1;
	while(response != 0){
		printf("Enter a number. Press 0 to quit:");
		scanf("%d", &response);
		//tell the user whether their number is even or odd
		if(response % 2 == 0){
			printf("%d is even\n", response);
		}else{
			printf("%d is odd\n", response);
		}
	}
	
}

