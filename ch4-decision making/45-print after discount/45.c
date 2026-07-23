#include <stdio.h>
int main(){
   int purchase_amt, discount;
   printf("Enter your purchase amount: ");
   scanf("%d",&purchase_amt);

   if (purchase_amt>=8000)
   {
      discount =purchase_amt*0.1;
   }
   else if(purchase_amt>=5000 && purchase_amt<8000)
   {
      discount =purchase_amt*0.08;
   }
   else if(purchase_amt>=1000 && purchase_amt<5000)
   {
      discount =purchase_amt*0.04;
   }
   else
   {
      discount =100;
   }

   printf("********************BILL INVOICE********************\n");
   printf("The Total bill is %d.\n",purchase_amt);
   printf("You got discount of %d on your total bill.\n",discount);
   printf("The payable amount after the discount is %d.\n",purchase_amt-discount);
   printf("Thank you for shopping.\n");

   return 0;}