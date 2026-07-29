#include <stdio.h>
int main()
{
   int n;
   printf("Enter the number of terms in the array : ");
   scanf("%d", &n);

   int matrix[n];

   printf("Enter the elements of the array : ");
   int i;
   for (i = 0; i < n; i++)
   {
      scanf("%d", &matrix[i]);
   }

   int target;
   printf("Enter the number to search in the array: ");
   scanf("%d", &target);

   int place = -1;
   for (i = 0; i < n; i++)
   {
      if (matrix[i] == target);
      place = i+1;
   }

   if (place == -1)
   {
      printf("Element not found.");
   }
   else
   {
      printf("The element is found on the position %d", place );
   }

   return 0;
}