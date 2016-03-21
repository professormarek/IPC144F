#include <stdio.h>

/*
This program demonstrates using programmer defined structs to 
model a few days worth of weather data
*/


/* 
the following is declaring our struct
(this doesn't allocate any memory YET)
this is just telling the compiler about
the aggregate type we are defining
*/
struct Weather{
	/*here we list the fields - or pieces of information that make up our new type*/
	int date;
	int month;
	int year;
	float temperature;
	float humidity;
};//don't forget me!

void clearBuffer(void){
	//variable to store the next character in the buffer
	char c=0;
	while(c != '\n'){
		c = getchar();
	}
}

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
we can call this function to display the report!
this function accepts an array of Weather objects, and the size (days) of the array
it displays to the user the information contained in the array of Weather
*/
void displayWeatherForecast(struct Weather w[], int days){
	//use a loop to visit each struct in the array, and display its contents
	int i;
	for(i=0; i<days; i++){
		//to access the fields in a struct object or variable use the . (dot) operator
		//=> identifier.field_name
		printf("Day %d, Date %d, Temperature %.1f, Humidity %.1f\n", i, w[i].date, w[i].temperature, w[i].humidity);

	}
}


//main function
int main(void){
	//declare a temporary struct to hold user input (we'll use this later)
	struct Weather temporary_weather;
	
	//demonstrate declaring an array of Weather structs or "objects"
	//store a forecast - today's tomorrow's and the next day's weather
	//also demonstates initializing an array of structs

	//this variable stores the maximum number of days of weather for our array of structs
	int max_days = 0;
	//get a maximum number from the user
	printf("Enter the maximum number (days) of Weather: \n");
	max_days = getUserInteger(1, 10000);

	//declare the array using the varible size (DO NOT INITALIZE)
	struct Weather forecast[max_days];

}
