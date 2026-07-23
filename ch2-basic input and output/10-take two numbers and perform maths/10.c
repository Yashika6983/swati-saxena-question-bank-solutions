#include <stdio.h>
int main(){
   int n1,n2;
   printf("Enter two numbers with a space : ");
   scanf("%d%d",&n1 ,&n2);
   int add =n1+n2;
   int sub =n1-n2;
   int product=n1*n2;
   int division =n1/n2;
   printf("addition=\t%d\t\nsubtraction=\t%d\t\nproduct=\t%d\t\ndivision=\t%d",add,sub,product,division);
   return 0;
}