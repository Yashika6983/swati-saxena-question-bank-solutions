#include <stdio.h>
int main(){
   char ch;
   printf("Enter a character: ");
   scanf("%c",&ch);

   if(ch=='a'||ch=='A'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U'||ch=='e'||ch=='E'){
      printf("it is a vowel.");
   }

   else{
      printf("it is a consonent");
   }

   return 0;
}