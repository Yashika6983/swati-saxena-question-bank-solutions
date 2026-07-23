#include<stdio.h>

int main()
{
   int number ,x,remainder;
   printf("Enter a number: ");
   scanf("%d",&number);
   x=number;

   while(x!=0)
   {
      remainder=x%10;
      printf("The table of %d is :",remainder);
      x=x/10;
      
      for (int i =1;i<=10;i++)
      {
         printf("%d X %d = %d \n",remainder,i,remainder*i);
      }
   }

   return 0;
}