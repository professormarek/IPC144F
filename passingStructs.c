#include <stdio.h>

/*
this program illustrates passing structs to functions,
copying structs using assignment,
and passing structs by address
*/

struct Weather{
	/*here we list the fields - or pieces of information that make up our new type*/
	int date;
	float temperature;
	float humidity;
};



int main(void){
	/*
	here we create a variable (allocate memory for) our first Weather object (struct variable)
	initialize the today_weather object using the  {} syntax
	*/
	struct Weather today_weather = {21, 2.2, 0.45}; 
	//recall the . dot operator is the field access operator that lets us access the object's fields
	printf("Date %d, Temperature %.1f, Humidity %.1f\n", 
		today_weather.date, today_weather.temperature, today_weather.humidity);
	/*
	demonstrate copying a struct field-by-field using the assigment operator
	*/
	//first declare a variable to hold the copy;
	struct Weather today_copy = {0,0,0};
	//show weather copy before assignment from today_weather
	printf("today_copy (before copy) Date %d, Temperature %.1f, Humidity %.1f\n",
                today_copy.date, today_copy.temperature, today_copy.humidity);
	//use the assignment operator
	today_copy = today_weather;
 	printf("today_copy (after copy) Date %d, Temperature %.1f, Humidity %.1f\n", 
                today_copy.date, today_copy.temperature, today_copy.humidity);  
	


}
