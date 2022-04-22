//prints square 
#include <stdio.h>
int main(){
    //declares variable name and data type
    int row, column, size;
    char cont;
    while(row <= size){ //checks if row is equal to size
        //asks for the size of the square
        printf("Enter square size:");
        scanf("%d", &size);
        //prints space or star in each row and column
        for( row = 1 ;row <=size ; row++){
            for(column = 1 ; column<=size;column++){
                if (row == 1 || row == size||column == 1||column == size){
                    printf("*");
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }
    //asks if the user wants to print another square
    printf("Print another square? Enter y or n: ");
    scanf("%*c%c", &cont);
        if (cont == 'n'){
            break;
        }
        else if (cont != 'y'){
            printf("Not a valid choice. \n");
            printf("Print another square? Enter y/n: ");
            scanf("%*c%c",&cont);
        }
    }
return 0;
}
