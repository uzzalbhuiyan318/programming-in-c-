/*
Take an input from user and print like a following pattern
Sample input: 5
Sample output:
1 2 3 4 5
1 2 3 4
1 2 3
1 2
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
            printf("%d ",j);
        }
        printf("\n");
    }
}
