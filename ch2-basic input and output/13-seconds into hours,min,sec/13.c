#include<stdio.h>

int main(){
   int min , hours, sec;

   printf("Enter the number of seconds : ");
   scanf("%d",&sec);

   hours =sec/3600;
   min=(sec%3600)/60;
   int second=(sec%3600)%60;

   printf("%d can be said as %d hours %d min and %d seconds",sec , hours,min,second);
   
   return 0;
}