#include <stdio.h>
int main(){
   int n1 , n2;
  
   printf("Enter the 1st number : ");
   scanf("%d",&n1);

   printf("Enter the 2nd number : ");
   scanf("%d",&n2);

   int x =(n1>n2)?n1:n2;
   
   printf("%d is greater.",x);

   return 0;
}