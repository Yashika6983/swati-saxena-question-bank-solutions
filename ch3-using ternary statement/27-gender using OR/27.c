#include <stdio.h>
int main(){
   char gender;

   printf("Enter your gender m/f: ");
   scanf("%c",&gender);

   (gender=='m'||gender=='M')?printf("Hello sir!"):printf("Hello mam!");

   return 0 ;
}