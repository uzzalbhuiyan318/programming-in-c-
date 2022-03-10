/*
Take an input from user and print like the following pattern
Sample input: 5
Sample output:
*
* *
* * *
* * * *
* * * * *
* * * *
* * *
* *
*
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j,space,n;
    printf("Enter the size of pyramid: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
