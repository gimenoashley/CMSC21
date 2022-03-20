//checks if the user is a teenager

#include <stdio.h>

int main(void){

	int age; //declares data type and variable names

	//asks for input
	printf("Enter your age: ");
	scanf("%d", &age);

	//checks if the age is between the range 13-19 then prints result
	if (age >= 13 && age <= 19){
        printf("You're a teenager. \n");
	}
	else{
        printf("You are not a teenager. \n");
	}

	return 0;
}

