#include <stdio.h>
int main(){
   int n1 , n2, n3 , x;

    printf("Enter the 1st number: ");
   scanf("%d",&n1);

   printf("Enter the 2nd number: ");
   scanf("%d",&n2);

   printf("Enter the 3rd number: ");
   scanf("%d",&n3);

   x= (n1>n2 && n1>n3)? n1:(n2>n1 && n1>n3)?n2:n3;

   printf("%d is the greatest number.",x);

   return 0;
   }