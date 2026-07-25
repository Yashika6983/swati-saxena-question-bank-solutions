#include <stdio.h>
#include<string.h>

int main(){

   char name [20];
   printf("Enter your name : ");
   scanf("%s",name);

   char name1[20],reverse[20];

   strcpy(name1,name);

   int length=strlen(name1);
   int i ;

   for (i= 0;i<=length-1;i++)
   {
      reverse[i]=name[length-1-i];}

      reverse[length]='\0';
   if (strcmp(name,reverse)==0)
   {
      printf("Your name is pallindrome.");
   }
   else
   {
      printf("Your name is not pallindrome.");
   }

   return 0;
}