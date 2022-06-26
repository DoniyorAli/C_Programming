#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char array [9] = "123456789";
    int number;
    char IKSO='X';
    char ZERO='O';
    
    
    for (int i=1; i<=9; i++){

    printf("\n");
    printf(" _______________________ \n");
    printf("|       |       |       |\n");
    printf("|   %c   |   %c   |   %c   |\n", array[6], array[7], array[8]);
    printf("|_______|_______|_______|\n");
    printf("|       |       |       |\n");
    printf("|   %c   |   %c   |   %c   |\n", array[3], array[4], array[5]);
    printf("|_______|_______|_______|\n");
    printf("|       |       |       |\n");
    printf("|   %c   |   %c   |   %c   |\n", array[0], array[1], array[2]);
    printf("|_______|_______|_______|\n");
    printf("\n");

    scanf("%d", &number);
        system("clear");

        if (i%2==0){
            array[number-1]=IKSO;
        }
        else 
            array[number-1]=ZERO;
//______________________________________________________________________

        if (array[0]==array[1] && array[0]==array[2] && array[1]==array[2]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
        if (array[3]==array[4] && array[3]==array[5] && array[4]==array[5]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
        if (array[6]==array[7] && array[6]==array[8] && array[7]==array[8]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
//____________________________________________________________________________

        if (array[0]==array[3] && array[0]==array[6] && array[3]==array[6]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
        if (array[1]==array[4] && array[1]==array[7] && array[4]==array[7]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
        if (array[2]==array[5] && array[2]==array[8] && array[5]==array[8]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
//_________________________________________________________________________________

         if (array[0]==array[4] && array[0]==array[8] && array[4]==array[8]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
        if (array[2]==array[4] && array[2]==array[6] && array[4]==array[6]){
            if (i%2==0){
                printf("Winner X\n");
                break;
            }
            else{
                printf("Winner O\n");
                break;
            }
        }
}
    
    return 0;
}