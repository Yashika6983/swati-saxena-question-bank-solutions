#include<stdio.h>
#include<stdlib.h>
int main(){
   int option;
   printf("Choose the option for operation such as:\n");
   printf("1.To print message.\n");
   printf("2.To print star.\n");
   
   printf("Enter your option number: ");
   scanf("%d",&option);

   switch(option)
   {
      case 1:
         goto message;
         break;
      
      case 2:
         goto star;
         break;

      default:
         exit(0);
   }

   message:
   {
      printf("Hello\n");
      goto end ;
   }

   star:
   {
      printf("*\n");
   }
   
   end:
   return 0;

}