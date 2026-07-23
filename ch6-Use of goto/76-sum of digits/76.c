#include<stdio.h>

int main()
{
   int number ,sum=0,x,remainder;
   printf("Enter a number: ");
   scanf("%d",&number);
   x=number;

   while(x!=0)
   {
      remainder=x%10;
      sum=sum +remainder;
      x=x/10;
   }

   printf("The sum of the digits of given number %d is %d",number,sum);

   return 0;}