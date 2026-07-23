#include<stdio.h>

int main()
{
   int org_num,num,digit , i, sum =0 ;
   long fact;

   printf("Enter the number.");
   scanf("%d",&org_num);

   num=org_num;

   if (num<0)
   {
      printf("Number is negative so it is not perfect.");
      return 0;
   }

   while(num>0)
   {
      fact=1;
      digit =num%10;
      for(i=1;i<=digit;i++)
      {
         fact=fact*i;
      }
      sum +=fact;
      num=num/10;
   }

   if(sum==org_num)
   {
      printf("Number is a strong number.");
   }
   else
   {
      printf("This is not a strong number.");
   }

   return 0;
}