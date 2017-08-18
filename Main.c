
//Declaring and Using Enum Data Type in C/C++
// Enum: Enumerated Data Types
//This is used to define names constants. i.e. gives names to integer constants

//How to define enums?
// enum <name> { enumeration_list } [variable_name];

#include <stdio.h>

enum Days {
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
} ;


void main()
{

	enum Days MyDay;
	
	MyDay = Sunday;
	
	printf("Sunday = %d\n", MyDay);
	
	MyDay = Tuesday;
	
	printf("Tuesday = %d\n", MyDay);




}
