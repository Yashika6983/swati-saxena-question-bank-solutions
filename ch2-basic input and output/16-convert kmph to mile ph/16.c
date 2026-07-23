#include<stdio.h>

int main(){
   float kmph , miph;
   printf("Enter the kmph value: ");
   scanf("%f",&kmph);

   miph = kmph*0.62137119;
   printf("%f kmph is equal to %f miph",kmph , miph);

   return 0;
}