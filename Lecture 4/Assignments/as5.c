//Displays one month calendar

#include <stdio.h>

int main (void){ //main function

	int days, start, n; /*declares data type and variable names
						days for number of days in a month
						start for the day of the week on which the month begins
						n for the day of the month */

	//ask for number of days
	printf("Enter number of days in a month: ");
	scanf("%d", &days);

	if (days == 28 || days == 30 || days == 31){ //checks if input is valid

		//asks for the start of the month if the number of days is valid
		printf("Enter the starting day of the week (1 = Sun, 7 = Sat): ");
		scanf("%d", &start);

		//checks if input is valid
		if (start >= 1 && start <=7){
			for (n = 1; n < start; n++){ 
				printf("   "); //displays blank spaces before the start of the month
			}

			n = 1;
			while (n <= days){
				printf("%3d", n); //displays days of the month
				if ((start + n - 1)%7 == 0){ //checks if one row has 7 columns
					printf("\n");
				}
				n++;
			}

		}
		else{
			printf("Invalid input.");
		}
	}
	else{
		printf("Invalid input.");
	}

	return 0;
}
