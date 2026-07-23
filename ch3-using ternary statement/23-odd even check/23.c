#include <stdio.h>
int main(){
   int number;
   printf("Enter the number to check : ");
   scanf("%d",&number);

   (number%2==0)?printf("number is even."):printf("number is odd.");

   return 0;

}