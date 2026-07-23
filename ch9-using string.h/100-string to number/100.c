#include <stdio.h>
#include<string.h>

int main ()
{
   int number;
   char n [][10]={{"Zero"},{"One"},{"Two"},{"Three"},{"Four"},{"Five"},{"Six"},{"Seven"},{"Eight"},{"Nine"}};

   printf("Enter a 1 digit number: ");
   scanf("%d",&number);
   printf("The number can be written in words as %s",n[number]);

   return 0;
}