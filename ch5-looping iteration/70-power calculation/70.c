#include<stdio.h>

int main()
{
   int number , power,i=1;
   printf("Enter the number: ");
   scanf("%d",&number);
   printf("Enter the power: ");
   scanf("%d",&power);

   while(power>=1)
   {
      i=i*number;
      power--;
   }

   printf("The result for powering is %d",i);

   return 0;
}