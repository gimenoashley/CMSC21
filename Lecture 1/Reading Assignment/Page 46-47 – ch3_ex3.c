#include <stdio.h>

int main(void){ //main function

	//declares datatype and variable names
	int num1, denom1, num2, denom2, result_num, result_denom;

	//asks for input
	printf("Enter first fraction: ");
	scanf("%d/%d", &num1, &denom1);

	printf("Enter second fraction: ");
	scanf("%d/%d", &num2, &denom2);

	//function to calculate sum of fractions
	result_num = num1*denom2 + num2*denom1;
	result_denom = denom1*denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	return 0;
}
