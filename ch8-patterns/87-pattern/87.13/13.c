#include<stdio.h>

int main()
{
   int  i;
   char j;

   for (i=1;i<=5;i++)
   {
      for (j='A';j<='A'+i-1;j++)
      {
         printf("%c",j);
      }

      for (j='A'+i-2;j>='A';j--)
      {
         printf("%c",j);
      }
      printf("\n");
   }
   return 0;
}