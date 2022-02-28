#include <stdio.h>

int main (void){ //main function
	
	//declare the data type and variable name
	int i, j;
	float x, y;

	//assign values to every variable name 
	i = 10;	
	j = 20;
	x = 43.2892f; //append f to a constant to signify that it should be interpreted as float
	y = 5527.0f;

	printf("i = %d, j = %d, x = %f, y = %f\n", i, j, x, y); //prints constants on console

	return 0; //returns 0 if the program was executed successfuly
}
