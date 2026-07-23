#include<stdio.h>

int main()
{
   int N,rev=0;
   printf("Enter a number: ");
   scanf("%d",&N);

   while(N!=0)
   {
      int remainder=N%10;
      
      rev=rev*10+remainder;
      N=N/10;
   }
   printf("The reverse of the number is %d",rev);
   return 0;
}
