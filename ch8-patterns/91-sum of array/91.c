#include<stdio.h>

int main()
{
   int n;
   int i ;
   int sum =0;
   printf("Enter the number of terms in the array:");
   scanf("%d",&n);

   int a [n];
   printf("Enter the elements of the array: ");
   for (i=0;i<=n-1;i++)
   {
      scanf("%d",&a[i]);
   }

   for (i=0;i<=n-1;i++)
   {
      sum+=a[i];
   }
    
   printf("The sum of all the elements of array is %d",sum);
   return 0;

}