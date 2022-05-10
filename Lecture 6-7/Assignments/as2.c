#include <stdio.h>
#include <stdbool.h>

#define destinations 8
#define pathways ((int) (sizeof(road_networks) / sizeof(road_networks[0])))


int main(){
    int i, j, location, last_location;
    //initializes road networks
    bool road_networks[destinations][destinations] = {[0][0]=true,[0][1]=true,[0][5]=true,
                                                      [1][0]=true,[1][1]=true,[1][2]=true,
                                                      [2][1]=true,[2][2]=true,[2][4]=true,
                                                      [2][5]=true,[3][3]=true,[3][4]=true,
                                                      [4][3]=true,[4][4]=true,[5][0]=true,
                                                      [5][2]=true,[5][5]=true,[6][0]=true,
                                                      [6][3]=true,[6][6]=true,
                                                      [7][5]=true,[7][7]=true,
                                                     };

    //displays adjacency matrix
    for (i = 0; i <= pathways; i++){
        for (j = 0; j <= pathways; j++){

            //prints the blank space on the top left
            if (i == 0 && j==0){
                printf("     ");
            }

            //prints the row of points and charging stations
            else if (i == 0){
                if (j == 3 || j == 4){
                    printf("[%c]   ",j+64);
                }
                else{printf(" %-5c",j+64);}
            }
            //prints the column of points and charging stations
            else if (i != 0 && j == 0){
                if (i == 3 || i == 4){
                    printf("[%c]  ",i+64);
                }
                else{printf("%-5c",i+64);}
            }

            //prints 1 on points with direct path
            //prints 0 otherwise
            else if (road_networks[i-1][j-1]==true){
                printf(" %-5s","1");
            }
            else{printf(" %-5s","0");}
        }
        printf("\n");
    }

    //asks which point the user is
    printf("Which point are you located? 0 - A, 1 - B, 2 - C, 3 - D, 4 - E, 5 - F, 6 - G, 7 - H 	");
    scanf("%d",&location);
    printf("At point: %c\n",location+65);

    //finds the nearest charging station
    while(location != 2 || location !=3){
        //checks if user is already in the charging station
        if (road_networks[location][2]){
            location = 2;
        }
        else if (road_networks[location][3]){
            location = 3;
        }

        //checks for available routes
        /*checks if the user already crossed the same path
        to prevent the user from crossing the same route*/
        else{
            for (i = 0; i < pathways; i++){
                if (road_networks[location][i] && i !=location && i != last_location){
                    last_location = location;
                    location = i;
                    break;
                }

            }
        }

        //prints the location of the user
        if (location == 2 || location == 3){
            printf("Point %c: Arrived at the charging station.", location+65);
            break;
        }
        else{printf("Now at point: %c\n", location+65);}
    }
    return 0;
}
