#include<stdio.h>

int main(){
   int number,sum=0;

   printf("Enter the number to check: ");
   scanf("%d",&number);

   if(number<=0)
   {
      printf("Enter a positive number.");
   }

   else
   {
      for(int i=1;i<=number/2;i++)
      {
         if(number%i==0)
         {
            sum =sum +i;
         }
      }
   }
   if (sum==number)
   {
      printf("The number is a perfect number");
   }
   else
   {
      printf("The number is not a perfect number.");
   }

   return 0;
}