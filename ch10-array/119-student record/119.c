#include<stdio.h>

int main()
{
   int roll_number[10];
   int marks[10];

   int i ;

   for (i=0;i<10;i++)
   {
      printf("Enter the roll number of student %d: ",i+1);
      scanf("%d",&roll_number[i]);
   }

   for (i=0;i<10;i++)
   {
      printf("Enter the marks of student %d: ",i+1);
      scanf("%d",&marks[i]);
   }

   int max_number=roll_number[0];
   int max_marks=marks[0];

   for (i=0;i<10;i++)
   {
      if (marks[i] > max_marks)
      {
         max_marks=marks[i];
         max_number=roll_number[i];
      }
   }

   printf("The maximum marks obtained is %d\n",max_marks);
   printf("The maximun marks is obtained by roll number %d",max_number);
  
   return 0;
}