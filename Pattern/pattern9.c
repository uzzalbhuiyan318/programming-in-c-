/*
Take a character and print the following patter
A
A B
A B C
A B C D
A B C D E
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j;
    char ch;
    printf("Enter the size of pyramid: ");
    scanf("%c",&ch);
    for(i='A';i<=ch;i++)
    {
        for(j='A';j<=i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}



