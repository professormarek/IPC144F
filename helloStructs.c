#include <stdio.h>

/*
This program demonstrates using programmer defined structs to 
model a few days worth of weather data

*/

#define NUM_DAYS 3

/* 
the following is declaring our struct
(this doesn't allocate any memory YET)
this is just telling the compiler about
the aggregate type we are defining
*/
struct Weather{
	/*here we list the fields - or pieces of information that make up our new type*/
	int date;
	float temperature;
	float humidity;
};//don't forget me!

/*
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
	struct Weather forecast[NUM_DAYS] = { {18, 5.5, 0.35} , {19, 7.9, 0.2} , {20, 12.4, 50.6} };

	//demonstrate passing an array of structs to a function in order to display the contents
	//note: this is pretty much the only time we don't use the struct keyword
	displayWeatherForecast(forecast, NUM_DAYS);
}
