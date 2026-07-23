#include <stdio.h>

int main(){
   float farenheit , celcius;
   printf("Enter the celcius value :");
   scanf("%f",&celcius);

   farenheit= (celcius*9.0/5.0)+32.0;

   printf("%f celcius is equal to %f farenheit.",celcius,farenheit);

   return 0;
}