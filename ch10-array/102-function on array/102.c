#include <stdio.h>

int main()
{
   int max ,i , smax, odd =0, even =0, arr[5];

   // input the array

   printf("Enter the 5 element array: ");

   for (i=0;i<5;i++)
   {
      scanf("%d",&arr[i]);
   }

   // finding max , 2nd max , sum of odd , sum of even 

   max=arr[0];
   smax=arr[0];

   for (i=0; i <5;i++)
   {
      if (arr[i]>max)
      {
         smax=max;
         max=arr[i];
      }
      else if(arr[i]>smax)
      {
         smax=arr[i];
      }

      if(arr[i]%2==0)
      {
         even+=arr[i];
      }
      else if(arr[i]%2!=0)
      {
         odd+=arr[i];
      }
   }

   printf("max =%d\nsmax=%d\neven=%d\nodd=%d",max, smax, even , odd);

   return 0 ;
}