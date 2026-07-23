#include<stdio.h>

int main()
{
   int n;
   int i ;

   printf("Enter the number of terms in the array:");
   scanf("%d",&n);

   int a [n];
   printf("Enter the elements of the array: ");
   for (i=0;i<=n-1;i++)
   {
      scanf("%d",&a[i]);
   }

   printf("The reverse order for the elements of array is :");
   for (i=n-1;i>=0;i--)
   {
      printf("%d  ",a[i]);
   }

   return 0;

}