#include<stdio.h>
#include<string.h>

int main()
{
   char s1[10],s2[10];
   printf("Enter 1st string = ");
   scanf("%s",s1);
   printf("Enter 2nd string = ");
   scanf("%s",s2);
   
   int length=strlen(s1);
   printf("The length of string 1 is %d\n",length);

   
   strlwr(s1);
   printf("The lowercase string 1 is %s\n",s1);

   strupr(s1);
   printf("The uppercase string 1 is %s\n",s1);

   strcpy(s1,s2);
   printf("after copying string 2 to string 1 , we get %s\n",s1);

   return 0 ;

}