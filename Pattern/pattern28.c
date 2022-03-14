/*
Print pi shape using star

Sample input: 5
Sample output:
 * * * * *
   *   *
   *   *
   *   *
   *     *
=================================================================
Author: Uzzal_Bhuiyan
Version: 1.0
*/
#include<stdio.h>
void main()
{
    int i,j;
    printf("\n");
    for(i=1; i<=5; i++)
    {

        for(j=1; j<=5; j++)
        {



            if(i==1 || j==2 || (i==2 && j==4)||(i==3 && j==4)||(i==4 && j==4)||(i==5 && j==5))
            {

                printf(" *");
            }
            else
            {
                printf("  ");
            }


        }
        printf("\n");
    }

}

