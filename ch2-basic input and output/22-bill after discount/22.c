#include<stdio.h>

int main(){
   int bill_amount;

   printf("Enter the amount of the bill: ");
   scanf("%d",&bill_amount);

   float discount_amount =bill_amount*10/100;
   float final_amount = bill_amount-discount_amount;
   printf("The amount after the discount is %10f",final_amount);

   return 0;
}