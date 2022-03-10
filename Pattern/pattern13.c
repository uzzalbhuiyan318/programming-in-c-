/*
Take an input from user and print like a following pattern
Sample input: 5
Sample output:
5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the size of row: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",i);
        }
        printf("\n");
    }
}
