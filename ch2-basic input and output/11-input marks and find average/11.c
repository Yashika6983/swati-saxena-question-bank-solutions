#include<stdio.h>

int main(){
   int sub1, sub2,sub3;
   printf("note that the marks are out of 100.\n");
   
   printf("Enter marks of 1st subject:\t");
   scanf("%d",&sub1);

   printf("Enter marks of 2nd subject:\t");
   scanf("%d",&sub2);

   printf("Enter marks of 3rd subject:\t");
   scanf("%d",&sub3);

   float average =(sub1+sub2+sub3)/3 ;

   printf("The average of your marks is %f",average);

   return 0;

}