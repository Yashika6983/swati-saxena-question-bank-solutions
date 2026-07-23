#include<stdio.h>

int main()
{
   int n , sum =0, x=1;
   float average;
   printf("Enter 10 numbers: ");
   for(int i=1;i<=10;i++)
   {
      scanf("%d",&n);
      sum+=n;       
   }
   average = (float)sum/10;

   printf("The sum of these numbers is %d\n",sum);
   printf("The average of these numbers is %f.\n",average);
   return 0;
}   