/*
Take an input from user and print the following pattern.
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
Author: Uzzal_Bhuiyan
*/


#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the size of pyramid: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
