#include<stdio.h>

int main()
{
   int matrix[3][3];

   printf("Enter the matrix: ");

   int i , j ,sum=0;
   for(i=0;i<3;i++)
   {
      for (j=0;j<3;j++)
      {
         scanf("%d",&matrix[i][j]);
      }
      printf("\n");
   }
   
   for (i=0;i<3;i++)
   {for (j=0;j<3;j++)
   {
      sum=sum+matrix[1][j];
   }
   printf("The sum of row %d is %d.\n",i+1 , sum);
   sum =0;
   }
   return 0 ;
}