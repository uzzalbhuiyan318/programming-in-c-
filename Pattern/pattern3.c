/* 
Take an input from user and print the following pattern
Sample input: 4
Sample output:
*
* *
* * *
* * * *
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
            printf("* ");
        }
        printf("\n");
    }
}
