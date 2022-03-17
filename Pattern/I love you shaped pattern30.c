/*
Take an input from user and print I Love you shaped using star
Sample input: 10
Sample output:

* * * * * * * * * *
* * * * * * * * * *
        * *
        * *
        * *
        * *
        * *
        * *
* * * * * * * * * *
* * * * * * * * * *



  *****     *****
 *******   *******
********* *********
*******************
 *****************
  ***************
   *************
    ***********
     *********
      *******
       *****
        ***
         *



* *             * *
* *             * *
* *             * *
* *             * *
* *             * *
* *             * *
* *             * *
* *             * *
* * * * * * * * * *
* * * * * * * * * *

====================================================
Author: Uzzal_Bhuiyan
Version: 1.0
Copyright: free
*/

#include<stdio.h>
void main()
{
    int i,j,n;
    printf("Enter row value here: ");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(j==n/2+1 || j==n/2 || i==1 || i==2 || i==n || i==n-1)
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
    printf("\n\n\n");
    for(i=n/2; i<=n; i=i+2)
    {
        for(j=1; j<n-i; j=j+2)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        for(j=1; j<=n-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for(i=n; i>=1; i--)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }

        for(j=1; j<=(i*2)-1; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    printf("\n\n\n");

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(((i==n || i==n-1) || (j==1 || j==2) || (j==n || j==n-1)) )
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

