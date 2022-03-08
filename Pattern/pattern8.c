/*
Take a character and print the following patter
a
a b
a b c
a b c d
a b c d e
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
            printf("%c ",j);
        }
        printf("\n");
    }
}


