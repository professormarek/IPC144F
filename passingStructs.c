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

/*
this is a funciton that demonstrates accepting a strcut Weather argument by value (not using a pointer)
note: a field-by-field copy is made of the struct being passed
*/
void testPassingStruct(struct Weather w){
	//print out the fields
 	printf("inside testPassingStruct (before modification): Date %d, Temperature %.1f, Humidity %.1f\n",
                w.date, w.temperature, w.humidity);
	//modify the fields
	w.date = -1;
	w.temperature = -1.0;
	w.humidity = -1.0;
	//print the fields after modification
 	printf("inside testPassingStruct (after modification): Date %d, Temperature %.1f, Humidity %.1f\n",
                w.date, w.temperature, w.humidity); 
}


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
	
	//call testPassingStruct(today_copy) to see whether it can modify the orignal object
	testPassingStruct(today_copy);
	//print out the values of today_copy's fields to see whether it has changed
	printf("today_copy (back in main after function call) Date %d, Temperature %.1f, Humidity %.1f\n",
                today_copy.date, today_copy.temperature, today_copy.humidity);	


}
