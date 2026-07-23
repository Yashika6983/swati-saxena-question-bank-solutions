#include <stdio.h>

int main(){
   float principal,time,rate ;
   
   printf("Enter the principal amount:");
   scanf("%f",&principal);
  
   printf("Enter the time:");
   scanf("%f",&time);

   printf("Enter the rate:");
   scanf("%f",&rate);

   float SI=principal*time*rate/100;

   printf("The SI for the amount taken is %f.",SI);
   
   return 0;

}