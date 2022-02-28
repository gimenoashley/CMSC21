#include <stdio.h>

int main(void) //main function
{
	//declare the data type and variables
	int i;
	float x;

	//assign values
	i = 40;
	x = 839.21f;

	//displays result
	//%nd, %nf, %ne, %ng format specifiers where n is the length or number of positions
	//spaces cover the empty positions 
	printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i); 
	printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);

	return 0; //return 0 when the program was executed successfully
}