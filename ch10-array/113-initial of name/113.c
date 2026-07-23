#include <stdio.h>

int main()
{
   char name[50];

   printf("Enter your complete name :");
   scanf("%[^\n]",name);//also reads the whitespaces
    printf("%c",name[0]);

   for (int i=1; name[i] != '\0';i++)
   {
      if(name[i]==' ')
      {printf("%c",name[i+1]);}
   }

   return 0;
}