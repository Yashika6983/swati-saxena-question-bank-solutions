#include<stdio.h>

int main(){
   int days;
   printf("Enter the number of days to convert :\t");
   scanf("%d",&days);

   int years =days/365;
   int weeks =(days%365)/7;
   int day = (days%365)%7;

   printf("%d days cans be said as %d years %d weeks and %d days",days,years,weeks,day);

   return 0;
}
