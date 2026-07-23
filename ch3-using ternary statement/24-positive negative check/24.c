#include <stdio.h>
int main(){
   int number;
   printf("Enter the number to check : ");
   scanf("%d",&number);

   (number>0)?printf("number is positive"):printf("number is negative");

   return 0;
   
}