#include<stdio.h>

int main()
{
   int number ,reverse=0,x,remainder;
   printf("Enter a number: ");
   scanf("%d",&number);

   x=number;

   while(x!=0)
   {
      remainder=x%10;
      reverse=reverse*10+remainder;
      x=x/10;
   }

   if (reverse==number)
   {
      printf("The given number %d is a palindrome number",number);
   }
   else
   {
      printf("The given number %d is not palindrome as the reverse of the number is %d.",number,reverse);
   }
   return 0;
}