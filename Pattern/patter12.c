/*
Take an input from user and print like a following pattern
Sample input: 5
Sample output:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

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
            printf("%d ",(i+j+1)%2);
        }
        printf("\n");
    }

}
