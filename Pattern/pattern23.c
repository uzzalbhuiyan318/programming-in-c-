/*
Take an input from user and print the following shape
Sample input: 5
Sample output:
* * * * o
* * * o *
* * o * *
* o * * *
o * * * *
=================================================================
Author: Uzzal_Bhuiyan
Version: 1.0

*/
#include <stdio.h>
void main(){
    int i,j,n;
    printf("Enter the size of row: ");
    scanf("%d", &n);

    for(i=n; i>=1; i--){
        for(j=1; j<=n; j++){
            if(i==j){
                printf("o ");
            }else{
                printf("* ");
            }
        }
        printf("\n");
    }
}

