#include<stdio.h>

int main()
{
   int n;
   printf("Enter the number of elements you want in the series: ");
   scanf("%d",&n);

   for(int i=1;i<=n;i++)
   {
      printf("%d , ",i*i);
   }
   return 0;
}