#include<stdio.h>

int main(){
   int day;

   printf("Enter the day number:");
   scanf("%d",&day);

   switch(day)
   {
      case 1:
         printf("It is Monday");
         break;

      case 2:
         printf("It is Tuesday");
         break;
      
      case 3:
         printf("It is Wednesday");
         break;

      case 4:
         printf("It is Thrusday");
         break;   
      
      case 5:
         printf("It is Friday");
         break;
      
      case 6:
         printf("It is Saturday");
         break;
      
      case 7:
         printf("It is Sunday");
         break;
   }
   return 0;
}