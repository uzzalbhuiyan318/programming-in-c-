/*
Take a character and print the following pattern
Sample input: E
Sample output:
A B C D E
A B C D
A B C
A B
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
            printf("%c ",j);
        }
        printf("\n");
    }
}




