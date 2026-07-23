#include<stdio.h>

int main(){
   int n1 ,n2;

   printf("Enter the value of 1st number: ");
   scanf("%d",&n1);

   printf("Enter the value of 2nd number: ");
   scanf("%d",&n2);

   printf( "before interchanging.\n");
   printf("n1\t=\t%d\nn2\t=\t%d\n",n1,n2);


   int c;

   c=n1;
   n1=n2;
   n2=c;

   printf( "after interchanging.\n");
   printf("n1\t=\t%d\nn2\t=\t%d\n",n1,n2);

}