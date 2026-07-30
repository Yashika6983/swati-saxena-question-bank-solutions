#include <stdio.h>

int add(int a , int b )
{
   int add = a+b;
   printf("The addition of %d and %d is %d",a,b,add);
   return 0;

}
int main()
{
   int a , b; 
   printf("Enter the numbers to add : ");
   scanf("%d%d",&a,&b);

   add (a,b);



   return 0 ;

}