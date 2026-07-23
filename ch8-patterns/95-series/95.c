#include<stdio.h>

int main()
{
   int n;
   printf("Enter the number of terms in the series");
   scanf("%d",&n);

   int i , j ;

   for (i=1;i<=n;i++)
   {
      for (j=1;j<=i;j++)
      {printf("1");} 
      printf(",");     
   }
   printf("\b ");

   return 0 ;
}