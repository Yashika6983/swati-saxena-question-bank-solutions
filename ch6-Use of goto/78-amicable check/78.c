#include<stdio.h>

int main()
{
   int n1,n2,sum=0,sum1=0;
   printf("Enter the first number :");
   scanf("%d",&n1);

   printf("Enter the second number :");
   scanf("%d",&n2);

   for(int i=1;i<=n1/2;i++)
   {
      if (n1%i==0)
      {
        
         sum=sum+i;
      }
   }

   for(int i=1;i<=n2/2;i++)
   {
      if(n2%i==0)
      {
        
         sum1=sum1+i;
      }
   }

   if(sum==n2&&sum1==n1)
   {
      printf("The given number pair of numbers has amicable numbers.");
   }
   else 
   {
      printf("These two numbers are not amicable");
   }
   return 0;
}