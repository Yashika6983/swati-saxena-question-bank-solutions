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
      sum=sum +(remainder*remainder*remainder);
      x=x/10;
   }
   if(sum==number)
   {
      printf("The given number %d is a armstrong number.",number);
   }

   else
   {
      printf("The number %d is not armstrong number as the sum of its digit is %d",number,sum);
   }
   return 0;

}