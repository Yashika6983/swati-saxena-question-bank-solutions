#include <stdio.h>
int main(){
   int number;
   printf("Enter an integer number(0-127):");
   scanf("%d",&number);

   if (number<32)
   {
      printf("The ASCII character for %d is non printable.\n");
      printf("Enter integer between 32 and 127 for printable characters.");
   }
   else
   {
      printf("The ASCII character for %d is %c",number,number);
   }
   return 0;
}