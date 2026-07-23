#include <stdio.h>

int main()
{
   float basic_pay , HRA,DA,TA;

   printf("Enter your basic pay:");
   scanf("%f",&basic_pay);

   if (basic_pay>=10000)
   {
      HRA=basic_pay*0.08;
      DA=basic_pay*0.07;
      TA=basic_pay*0.08;
   }

   else if(basic_pay>=5000 && basic_pay<10000)
   {
      HRA=basic_pay*0.06;
      DA=basic_pay*0.05;
      TA=basic_pay*0.07;
   }

   else
   {
      HRA=basic_pay*0.06;
      DA=basic_pay*0.05;
      TA=basic_pay*0.07;
   }

   printf("You are getting %f as HRA\n",HRA);
   printf("You are getting %f as TA\n",TA);
   printf("You are getting %f as DA\n",DA);

   basic_pay =basic_pay+HRA+DA+TA;
   
   printf("The total salary after giving HRA , DA , TA is %f.",basic_pay);

   return 0;
}