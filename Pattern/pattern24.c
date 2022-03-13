/*
Take an input from user and print cross shape or X shape pattern.
Sample input: 5
Sample output:
o * * * *
* o * * *
* * o * *
* * * o *
* * * * o
=================================================================
Author: Uzzal_Bhuiyan
Version: 1.0

*/
#include <stdio.h>
void main(){
    int i,j,n;
    printf("Enter row number: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
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
