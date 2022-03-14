/*
Take an input from user and print following shape (cross shape or X shape)
Sample input: 5
Sample output:
*       *
  *   *
    *
  *   *
*       *
<<<<<<< HEAD
=================================================================
=======
==================================================
>>>>>>> 005d2177dab726de8075739ce0d122b01a9ddc00
Author: Uzzal_Bhuiyan
Version: 1.0

*/
#include <stdio.h>

void main()
{
   int i,j,n;
   printf("Enter the size of row: ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       for(j=1;j<=n;j++)
       {
           if(i==j || i+j==n+1)
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
