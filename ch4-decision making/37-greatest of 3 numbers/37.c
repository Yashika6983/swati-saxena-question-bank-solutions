#include <stdio.h>
int main(){
   int a,b,c;

    printf("Enter the 1st number: ");
   scanf("%d",&a);

   printf("Enter the 2nd number: ");
   scanf("%d",&b);

   printf("Enter the 3rd number: ");
   scanf("%d",&c);
    
   if (a>b&&a>c)
   {
      printf("%d is the greatest number.",a);
   }
   else if(b>a && b>c)
   {
      printf("%d is the greatest number.",b);
   }
   else if(c>a && c>b)
   {
      printf("%d is the greatest number.",c);
   }
   else
   {
      printf("Any number among them is equal.");
   }

   return 0 ;}