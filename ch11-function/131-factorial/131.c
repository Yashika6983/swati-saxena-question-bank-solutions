#include <stdio.h>

int factorial(int a )
{
   int fact=1;
   if(a==1||a==0)
   {
      return 1;
   } 
   else
   {
      return a*factorial(a-1);
   }
 
}


int main()
{
   int a ; 
   printf("Enter the numbers to find factorial: ");
   scanf("%d",&a);
   
   if (a<0)
   {
      printf("Factorial is not possible.");
   }
   else 
   {
      int facto=factorial(a);
      printf("The factorial of %d is %d.",a,facto);
      return 0 ;
   }

   return 0;
}