/*
Take an input and print the a pyramid like below.
A
B B
C C C
D D D D
E E E E E
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j;
    char ch;
    printf("Enter the size of pyramid: ");
    scanf("%c",&ch);
    for(i='a';i<=ch;i++)
    {
        for(j='a';j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}
