#include<stdio.h>

int main()
{
   int age;
   char gender;

   printf("Enter your age:");
   scanf("%d",&age);

   printf("Enter your gender(f/m):");
   scanf(" %c",&gender);

   if(gender=='F'||gender=='f')
   {
      if(age>=60)
      {
      printf("Hello Aunty!");
      }
      else if(age>=20&& age<65)
      {
         printf("Hello mam!");
      }
      else
      {
         printf("Hello young girl!");
      }
   }
  
   else if(gender=='M'||gender=='m')
   {
      if(age>=60)
      {
      printf("Hello Uncle!");
      }
      else if(age>=20&& age<65)
      {
         printf("Hello sir!");
      }
      else
      {
         printf("Hello young boy!");
      }
   }
   else
   {
      printf("Hello");
   }

   return 0;
   }
