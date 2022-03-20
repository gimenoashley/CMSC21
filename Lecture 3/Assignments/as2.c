//convert 2-digit number to words

#include <stdio.h>

int main(void){

    int first_digit, second_digit; //declares data type and variable names

    //asks for input
    printf("Enter two digits: ");
    scanf("%1d%1d",&first_digit,&second_digit);

    /*checks if the first digit is 1 and divides the second digit by 10
    then get the remainder*/
    //displays the result

    if (first_digit == 1) {
        switch(second_digit % 10) {
            case 0: printf("ten \n"); break;
            case 1: printf("eleven \n"); break;
            case 2: printf("twelve \n"); break;
            case 3: printf("thirteen \n"); break;
            case 4: printf("fourteen \n"); break;
            case 5: printf("fifteen \n"); break;
            case 6: printf("sixteen \n"); break;
            case 7: printf("seventeen \n"); break;
            case 8: printf("eighteen \n"); break;
            case 9: printf("nineteen \n"); break;
        }
    return 0;
    }

    /*if the first number is not equal to 1, the program
    will divide the first digit and second digit by 10 then get the
    remainder*/
    //prints result

    switch(first_digit % 10) {
        case 0: printf("zero \n"); break;
        case 1: printf("ten \n"); break;
        case 2: printf("twenty"); break;
        case 3: printf("thirty"); break;
        case 4: printf("forty"); break;
        case 5: printf("fifty"); break;
        case 6: printf("sixty"); break;
        case 7: printf("seventy"); break;
        case 8: printf("eighty"); break;
        case 9: printf("ninety"); break;
    }
    switch(second_digit % 10) {
        case 0: break;
        case 1: printf("-one \n"); break;
        case 2: printf("-two \n"); break;
        case 3: printf("-three \n"); break;
        case 4: printf("-four \n"); break;
        case 5: printf("-five \n"); break;
        case 6: printf("-six \n"); break;
        case 7: printf("-seven \n"); break;
        case 8: printf("-eight \n"); break;
        case 9: printf("-nine \n"); break;
    }

    return 0;
}
