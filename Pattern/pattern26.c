/*
Take an input from user and print  plus shape (+ shape)
Sample input: 5
Sample output:
    *
    *
* * * * *
    *
    *
=================================================================
Author: Uzzal_Bhuiyan
Version: 1.0

*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the size of row: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==n/2+1 || j==n/2+1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
