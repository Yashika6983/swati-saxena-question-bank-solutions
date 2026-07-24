#include<stdio.h>
#include <ctype.h>
int main()
{
   char name[20];
   int i ; 


   printf("Enter your name: ");
   scanf("%s",name);

   for (i=0;name[i] != '\0';i++)
   {
      if (isupper (name[i]))
      {
      name[i]=tolower(name[i]);
      }

      else if(islower(name[i])) {
         name[i]=toupper(name[i]);
      }
   }
   

   printf("Updated name: ");
   for (i=0;name[i] != '\0';i++)
   {
      printf("%c",name[i]);
   }

   return 0;

}