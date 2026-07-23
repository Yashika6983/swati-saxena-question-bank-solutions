#include<stdio.h>

int main()
{
   int n , x=1;
   printf("Enter the number of elements you want in the series: ");
   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
      printf("%d , ",x);
      x=(-1)*x;       
   }
   return 0;
}   