#include<stdio.h>

int main(){
   int pen_qty ,amount;

   printf("Enter the quantity of the pen: ");
   scanf("%d",&pen_qty);
   printf("Enter the amoount of 1 pen: ");
   scanf("%d",&amount);

   printf("The total amount of the bill is %d.",pen_qty*amount);

   return 0 ;
}