/*
Take an input from user and print like the following pyramid
Sample input: 5
Sample output:
* * * * *
* * * *
* * *
* *
*
* *
* * *
* * * *
* * * * *
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the size of pyramid: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

