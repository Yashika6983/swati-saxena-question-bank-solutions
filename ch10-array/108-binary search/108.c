#include <stdio.h>

int main()
{
   int n ,i,search;

   printf("Enter the number of elements in the array : ");
   scanf("%d",&n);

   int arr[n];

   printf("Enter the array : \n");
   for (i=0;i<n;i++)
   {
      scanf("%d",&arr[i]);
   }

   printf("Enter the element to search: ");
   scanf("%d",&search);

   for(i=0;i<n;i++)
   {
      if(arr[i]==search)
      {
         printf("The number %d is present at index %d.",search,i,);
         break;
      }
   }

   return 0;
}