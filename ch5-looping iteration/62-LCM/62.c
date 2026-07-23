#include<stdio.h>

int main()
   {
   int n1 ;
   int n2;
   printf("Enter the 1st number for LCM: ");
   scanf("%d",&n1) ;  
   printf("Enter the 2nd number for LCM: "); 
   scanf("%d",&n2);

   int max =(n1>n2)?n1:n2;

   for (int i=max;;i+=max)
   {
      

      if(i%n1==0&&i%n2==0)
      {
       
         printf("The LCM for %d and %d is %d",n1, n2, i);
         break;
      }
      
   }
   return 0; 
   }

