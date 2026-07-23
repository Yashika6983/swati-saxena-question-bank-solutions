#include<stdio.h>

int main (){
   int i , j, n=7;

   for (i=1;i<=n;i++)
   {
      for (j=1;j<=n;j++)
      {
         if(j==i||j+i==n+1)
         {
            printf("*");
         }
         else
         {
            printf(" ");
         }
      }
      printf("\n");
   }
   return 0;
}