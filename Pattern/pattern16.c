/*
Take an input and print the a pyramid like below.
Sample input: E
Sample output:
E E E E E
D D D D
C C C
B B
A
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j;
    char ch;
    printf("Enter the size of pyramid: ");
    scanf("%c",&ch);
    for(i=ch;i>='A';i--)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("\n");
    }
}

