#include <stdio.h>

int main(void){
    int i;

    i = 10;
    while (i < 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n");
    for (i = 10; i < 10; i++) {
        printf("%d ", i);
    }
    printf("\n");
    i = 10;
    do {                    //differs from for and while since it executes
        printf("%d ", i);   //atleast once since it iterates even without
        i++;                // checking the condition
    } while (i < 10);


    return 0;
}
