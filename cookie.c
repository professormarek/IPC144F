/*
this program will repeatedly ask the user to accept a cookie
until they agree
*/
#include <stdio.h>

int main(void){
	int response=1;
	while(response != 0){
		//bug the user
		printf("Do you want a cookie? Press 0 for yes:");
		scanf("%d", &response);
	}
	printf("Cookie accepted! Mwa ha haha\n");
	

}


