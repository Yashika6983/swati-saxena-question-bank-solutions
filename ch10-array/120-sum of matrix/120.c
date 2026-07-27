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

   for (j=0;j<3;j++)
   {
      sum=sum+matrix[1][j];
   }

   printf("The sum of 1st row is %d.\n",sum);
   sum=0;
    for (j=0;j<3;j++)
   {
      sum=sum+matrix[1][j];
   }
   printf("The sum of 2nd row is %d.\n",sum);
   sum=0;
    for (j=0;j<3;j++)
   {
      sum=sum+matrix[1][j];
   }
   printf("The sum of 3rd row is %d.\n",sum);

   return 0 ;
}