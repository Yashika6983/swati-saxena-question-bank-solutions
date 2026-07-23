#include<stdio.h>

int main()
{
   char name[20];
   int i , j;
   printf("Enter your name: ");
   scanf("%s",name);

   for(i=0;name[i]!='\0';i++)
   {
      for (j=0;j<=i;j++)
      {
         printf("%c",name[j]);
      }

      printf("\n");
   }

   return 0;
}