//Prints table of powers of two

#include <stdio.h>

int main (void){ //main function
	int i = 0, n, product = 1; /*declares data type and variable names
								i is the power of two and should start at 0
								n is the number of entries in the table
								product is the result of powers of two*/

	//asks for number of entries
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	while (i<=n){ //iterates until i > n
		if (i == 0){ 							//since any number raised to 0 is equal to 1,
			printf("%5d%10d \n", i, product*1); //the program will multiply the initial product to 1
			i++;
		}
		else{
       		product*=2;
        	printf("%5d%10d \n", i, product);	//displays power of two and product
			i++;
		}
	}
	return 0;
}
