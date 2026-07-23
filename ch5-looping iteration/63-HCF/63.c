#include<stdio.h>

int main()
{
   int n1 , n2 ;
   printf("Enter the 1st number for HCF: ");
   scanf("%d",&n1) ;  
   printf("Enter the 2nd number for HCF: "); 
   scanf("%d",&n2);

   int min =(n1<n2)?n1:n2;

   for(int i =min;i>=1;i--)
   {
      if(n1%i==0&&n2%i==0)
      {
         printf("The HCF for %d and %d is %d.",n1 , n2, i);
         break;
      } 
   }
   return 0;
}