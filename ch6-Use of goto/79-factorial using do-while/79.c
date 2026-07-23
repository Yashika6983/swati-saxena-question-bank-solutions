#include<stdio.h>

int main()
{
   int n ;
   printf("Enter the number to find the factorial: ");
   scanf("%d",&n);
   
   int factorial=1;
   
   do
   {
      factorial =factorial*n;
      n--;
   } 
   while (n>=1);

   printf("The factorial of given number is %d",factorial);
   return 0;
}
   