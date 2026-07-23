#include<stdio.h>

int main()
{
   int n ,i=1;
   printf("Enter the number to find the factorial: ");
   scanf("%d",&n);
   
   int factorial=1;
   
   if(i<0)
   {
      printf("Factorial is not possible for negative number.");
   }
   else 
   {
      while(i<=n)
      {
         factorial*=i;
         i++;    
      }
   }
   printf("The factorial is %d",factorial);

return 0;
    
}