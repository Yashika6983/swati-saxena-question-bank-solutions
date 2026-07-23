#include<stdio.h>

int main()
{
   int arr1[10],arr2[10];
   int i ;

   //input array 1
   printf("Enter the array with 10 integers: \n");

   for (i=0;i<10;i++)
   {
      scanf("%d",&arr1[i]);
   }

   //printing element of array 1 that you entered

   printf("You entered the array: \n");

   for (i=0;i<10;i++)
   {
      printf("%d ",arr1[i]);
   }

   //copying the elements to 2nd array

   for (i=0;i<10;i++)
   {
     arr2[i]=arr1[i];
   }

   //printing 2nd array
   printf("\nThe array after copying element is : \n");

   for (i=0;i<10;i++)
   {
      printf("%d ",arr2[i]);
   }
   

   return 0;
}