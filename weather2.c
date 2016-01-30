/*
this program provides advice about what to do depending on the outdoor temperature
entered by the user
V2 shows the else keyword off
*/

#include <stdio.h>

int main(void){
	int temperature=0;

	printf("please enter today's temperature: ");
	scanf("%d", &temperature);

	if(temperature > 30){
		printf("go swimming\n");
	}else{
		printf("it's not that hot out\n");
	}

	printf("have a nice day\n");
}
