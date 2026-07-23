#include<stdio.h>

int main(){
   float units , bill ,charge ,subcrg;
   
   printf("Enter the number of units you consumed: ");
   scanf("%f",&units);

   if (units<=200)
   {
      charge =1.20;
      bill=charge*units;
   }

   else if (units>=200 && units<400)
   {
      charge=1.50;
      bill=charge*units;
   }

   else if(units>=400 && units<600)
   {
      charge=1.80;
      bill=charge*units;
   }

   else
   {
      charge=2.00;
      bill=charge*units;
   }

   if (bill>400)
   {
      subcrg= bill*0.15;
      bill=bill+subcrg;
   }

   if (bill<100)
   {
      bill=100;
   }

   printf("*****Electricity Bill*****\n");
   printf("Units consumed = %f\n",units);
   printf("The rate of charge for %f units is %f per unit.\n",units,charge);
   if(subcrg>0)
   {
      printf("The subcharge applied on the rate of 15percent is %f\n",subcrg);
   }
   
   
   printf("The total bill is %f\n",bill);

   return 0;

}