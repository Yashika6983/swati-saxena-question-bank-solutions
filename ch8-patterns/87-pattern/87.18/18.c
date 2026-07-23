#include <stdio.h>

int main()
{
   int i , j, n=5;
   
   //for upper loop
   for (i=n;i>=1;i--)
   {
      //left stars
      for (j=1;j<=i;j++)
      {
         printf("*");
      }
       
      //center spaces
      for (j=1;j<=2*(n-i);j++)
      {
         printf(" ");
      }

      //right stars
      for (j=1;j<=i;j++)
      {
         printf("*");
      }
      
      printf("\n");
   }

   //lower half 
   for (i=1;i<=n;i++)
   {
      //left stars
      for (j=1;j<=i;j++)
      {
         printf("*");
      }

      //center spaces 
      for (j=1;j<=2*(n-i);j++)
      {
         printf(" ");
      }

      //right stars
      for (j=1;j<=i;j++)
      {
         printf("*");
      }

      printf("\n");
   }

   return 0 ;
}