#include<stdio.h>
#include<math.h>
int main()
{
   int number;
   printf("Enter the number :");
   scanf("%d",&number);
    
   
   int r=sqrt(number);

   if(number*number==r)
   {
      printf("The number is a perfect square.");
   }
   else{
      printf("This is not a perfect square");
   }

   return 0;

}