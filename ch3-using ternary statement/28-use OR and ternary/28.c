#include <stdio.h>
int main(){
   char gender;

   printf("Enter your gender m/f: ");
   scanf("%c",&gender);

   (gender=='m'||gender=='M')?printf("Hello sir!"):(gender=='f'||gender=='F')?printf("Hello mam!"):printf("Error, enter the gender again.");

   return 0;
}