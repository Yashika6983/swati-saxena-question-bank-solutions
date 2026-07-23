#include<stdio.h>

int main(){
   int number,temp=0;

   printf("Enter the number to check: ");
   scanf("%d",&number);

   for (int i=2;i<=number/2;i++)
   {
      if(number%i==0)
      {
         temp =1;
         break;
      }
   }

   if(temp==0)
   {
      printf("The number is prime.");
   }
   else
   {
      printf("The number is not prime");   
   }
   return 0;
}