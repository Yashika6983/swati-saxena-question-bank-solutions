#include<stdio.h>

int main()
{
   char name[50];

   int count=0 ;

   printf("Enter your name: ");
   scanf("%[^\n]",name);

   for (int i =0; name[i]!='\0';i++)
   {
      count ++;
   }

   printf("The length of your name is %d",count);

   return 0 ;
}