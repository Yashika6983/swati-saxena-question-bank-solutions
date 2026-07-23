#include <stdio.h>

int main(){
   int basic;
   printf("Enter you basic salary: ");
   scanf("%d",&basic);

   float HRA =basic*10/100;
   float DA =basic*8/100;
   float TA =basic*5/100;
   
   printf("Your total salary is %f",basic+HRA+DA+TA);

   return 0;
}