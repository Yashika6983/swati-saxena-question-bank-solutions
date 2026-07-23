#include<stdio.h>

int main(){
   char grade;

   printf("Enter your grade (e,v,g,a,f):");
   scanf("%c",&grade);

   switch (grade)
   {
      case'E':
      case'e':
         printf("Excellent");
         break;

      case'V':
      case'v':
         printf("Very good");
         break;
      
      case'G':
      case'g':
         printf("Good");
         break;

      case'A':
      case'a':
         printf("Average");
         break;

      case'F':
      case'f':
         printf("Fail");
         break;
   }

   return 0;
}