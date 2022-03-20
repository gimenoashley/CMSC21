//reverse a 2-digit number

#include <stdio.h>

int main (void){

	int i1, i2; //declares data type and variable names

	//asks an input
	printf("Enter a 2-digit number: ");
	scanf("%1d%1d", &i1, &i2);

	printf("Reverse: %d%d", i2, i1); //displays the reversed digits

	return 0;
}
