/*
Take an input from user and print the following pattern
Sample input: 3
Sample output:
* * *
* * *
* * *
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the size of your pattern: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
