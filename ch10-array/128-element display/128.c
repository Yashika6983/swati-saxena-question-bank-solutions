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
   printf("Enter the position of element to search in the array: ");
   scanf("%d", &target);

   int place;
   for (i = 0; i < n; i++)
   {
      if (i == target-1 );
      place = matrix[target-1];
   }

   printf("The element at the position %d is %d",target,place);

   return 0;
}