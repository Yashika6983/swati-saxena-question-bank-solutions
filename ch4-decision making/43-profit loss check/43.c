#include<stdio.h>

int main(){
   float cost_pri , selling_pri ;
   
   printf("Enter the cost prize: ");
   scanf("%f",&cost_pri);

   printf("Enter the selling prize: ");
   scanf("%f",&selling_pri);

   if(cost_pri<selling_pri)
   {
      printf("you are having a profit of ammount %f\n",selling_pri-cost_pri);
   }

   else if(cost_pri>selling_pri)
   {
      printf("you are having a loss of ammount %f\n",cost_pri-selling_pri);
   }

   else
   {
      printf("you are neither having profit nor loss.\n");
   }

   return 0;
}

