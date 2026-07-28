#include <stdio.h>

int main()
{

   int matrix[3][3];

   printf("Enter the matrix: \n");

   int i, j, zero, non_zero;
   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         scanf("%d", &matrix[i][j]);
      }
   }

   for (i = 0; i < 3; i++)
   {
      for (j = 0; j < 3; j++)
      {
         if (matrix[i][j])
         {
            zero++;
         }
         else
         {
            non_zero++;
         }
      }

      if (zero > non_zero)
      {
         printf("It is a sparse matrix.");
      }
      else
      {
         printf("It is not a sparse matrix.");
      }

      return 0;
   }
}