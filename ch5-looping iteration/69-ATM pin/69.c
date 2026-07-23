#include<stdio.h>
#include<conio.h>

int main()
{
   char pin;
   int i;
   printf("Enter your pin: ");

   for(i=1;i<=4;i++)
   {
      pin =getch();
      printf("*");
   }

   return 0;
}