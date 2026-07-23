#include<stdio.h>
int main(){
   float speed , distance , time;
   printf("Enter the distance covered in km: ");
   scanf("%f",&distance);
   printf("Enter the time taken in hr: ");
   scanf("%f",&time);

   speed=distance/time;

   printf("The speed of the bike is %f kmph",speed);

   return 0;
}