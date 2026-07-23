#include <stdio.h>
#include<string.h>

int main()
{
   char gender;
   char name[20],prefix[10];

   printf("Enter your name: ");
   scanf("%s",name);

   printf("Enter your gender (m/f): ");
   scanf(" %c",&gender);

   if (gender=='m'||gender=='M')
   {
      strcpy(prefix,"Mr. ");
   }

   else if (gender=='f'||gender=='F')
   {
      strcpy(prefix,"Ms.");
   }

   strcat(prefix,name);

   printf("Hello %s\n", prefix);

   return 0;
}