/*
Take an input from user and print like a following pyramid
Sample input: 5
Sample output:
1 
1 2
1 2 3
1 2 3 4
1 2 3 4 5
Author: Uzzal_Bhuiyan
*/
#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter the size of row: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
}
