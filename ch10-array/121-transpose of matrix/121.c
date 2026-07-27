#include<stdio.h>

int main()
{
   int matrix[3][3],matrixt[3][3];

   printf("Enter the matrix: ");

   int i , j ,sum=0;
   for(i=0;i<3;i++)
   {
      for (j=0;j<3;j++)
      {
         scanf("%d",&matrix[i][j]);
      } 
   }
   for(i=0;i<3;i++)
   {
      for (j=0;j<3;j++)
      {
         matrixt[i][j]=matrix[j][i];
      } 
   }

   printf("The transpose of your matrix:\n");

  for(i=0;i<3;i++)
   {
      for (j=0;j<3;j++)
      {
         printf("%d",matrixt[i][j]);
      } 
      printf("\n");
   }
   
   return 0;

   
   
}