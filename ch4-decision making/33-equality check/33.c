#include <stdio.h>
int main(){
   int number1,number2;
   printf("Enter first number :");
   scanf("%d",&number1);
   printf("Enter second number:");
   scanf("%d",&number2);

   if (number1==number2)
   {
      printf("Yes, both the numbers are equal.");
   }
   else
   {
      printf("Both the numbers are not equal.");
   }

   return 0;}