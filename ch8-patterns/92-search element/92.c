#include<stdio.h>

int main()
{
   int n;
   int i , digit, index =0;

   printf("Enter the number of terms in the array:");
   scanf("%d",&n);

   int a [n];
   printf("Enter the elements of the array: \n");
   for (i=0;i<=n-1;i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Enter the element to search : ");
   scanf("%d",&digit);

   for(i =0 ; i<=n-1;i++)
   {
      if(a[i]==digit)
      {
         index=i;
         printf("The digit is found at the index %d.\n",index);
      }
   }

   if(index==0)
   {
      printf("There is no entry in array for %d.\n",digit);
   }

   return 0;
}