#include <stdio.h>

int calculation(int a , int b )
{
   int calculation = (a*b)+10;
   printf("The addition of %d and %d is %d",a,b,calculation);
   return 0;
}
int main()
{
   int a , b; 
   printf("Enter the numbers to perform the calculation: ");
   scanf("%d%d",&a,&b);

    calculation(a,b);



   return 0 ;

}