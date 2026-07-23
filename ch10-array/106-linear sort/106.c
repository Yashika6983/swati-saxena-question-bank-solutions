#include <stdio.h>

int main()
{
   int i , j , c , arr[5];

   printf("Enter the 5 element of the array: \n");

   for (i=0;i<5;i++)
   {
      scanf("%d",&arr[i]);
   }

   //linear sort

   for (i=0;i<5;i++)
   {
      for(j=i+1;j<5;j++)
      {
         if(arr[i]>arr[j])
         {
            c=arr[i];
            arr[i]=arr[j];
            arr[j]=c;
         }
      }
   }

   //result after sorting 

   printf("The array after sorting is : \n");

   for(i=0;i<5;i++)
   {
      printf("%d ",arr[i]);
   }


   return 0;
}