#include<stdio.h>

int main()
{
   int n1,n2;
   printf("Enter the 1st number: ");
   scanf("%d",&n1);
   printf("Enter the 2nd number: ");
   scanf("%d",&n2);

   printf("\n");
   printf("Enter your option for the operation: \n1. For addition. \n2.For substraction \n");
   printf("3. For multiplication. \n4. For division.\n");

   int option;
   printf("Enter your option :");
   scanf("%d",&option);


   switch(option)
   {
      case 1:
      goto add;
      break;
      
      case 2:
      goto subt;
      break;
      
      case 3:
      goto multiply;
      break;

      case 4:
      goto divide;
      break;
   }

   add:
   {
      printf("The sum of %d and %d is %d\n",n1,n2 , n1+n2);
   }

   subt:
   {
      printf("The difference of %d and %d is %d\n",n1,n2 , n1-n2);
   }

   multiply:
   {
      printf("The multiplication of %d and %d is %d\n",n1 , n2 , n1*n2);
   }

   divide:
   {
      if (n2==0)
      {
         printf("Division is not possible.\n");
      }
      else
      {
         printf("The division of %d/%d is %d\n",n1,n2, n1/n2);
      }
   }
    
   printf("Thank You");
}