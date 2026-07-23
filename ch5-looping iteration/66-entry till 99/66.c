#include <stdio.h>

int main(){
   int entry;
   printf("Enter any number :");
   scanf("%d",&entry);

   while(entry!=99)
   {
      printf("Enter another number:");
      scanf("%d",&entry);
   }

   printf("Thanks for your entry!");

   return 0;
}