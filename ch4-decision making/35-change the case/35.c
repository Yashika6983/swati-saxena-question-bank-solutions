#include <stdio.h>
#include<ctype.h>
int main(){
   char ch;
   printf("Enter a character(alphabet): ");
   scanf("%c",&ch);

   if (islower(ch))
   {
      printf("You entered a lower case character.\n");
      printf("The upper case of the character is %c\n",toupper(ch));
   }

   else
   {
      printf("You entered a upper case character.\n");
      printf("The lower case of the character is %c\n",tolower(ch));
   }

   return 0;
   }
