#include <stdio.h>
int main(){
   int n1,n2 ,option;
   printf("Enter 1st number:");
   scanf("%d",&n1);
   
   printf("Enter 2nd number:");
   scanf("%d",&n2);

   printf("Select your option to perform operation:\n");
   printf("1. Addition\n");
   printf("2. Substraction\n");
   printf("3. Multiplication\n");
   printf("4. Division\n");

   printf("Enter your option number: ");
   scanf("%d",&option);

   switch (option)
   {
      case 1 :
         printf("The addition of %d and %d is %d",n1,n2,n1+n2);
         break;

      case 2 :
         printf("The substraction of %d and %d is %d",n1,n2,n1-n2);
         break;

      case 3 :
         printf("The product of %d and %d is %d",n1,n2,n1*n2);
         break;

      case 4 :
         if (n2==0)
         {
            printf("The division is not possible as 2nd number is 0");
         }
         else
         {
            float division =n1/n2 ;
            printf("The division as %d / %d is %f",n1 , n2 , division);
         }

   }

   return 0 ;
   
}