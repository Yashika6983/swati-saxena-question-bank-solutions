#include<stdio.h>

int main()
{
   int i , j;
   char letter;
   printf("Enter the first letter of your name: ");
   scanf("%c",&letter);

   for (i=letter;i<letter+5;i++)
   {
      for (j=letter;j<=i; j++)
      {
         printf("%c",j);
      }
      printf("\n");
   }

   return 0;

}