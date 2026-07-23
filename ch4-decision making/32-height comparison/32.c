#include <stdio.h>
int main(){
   float height1,height2;
   printf("Enter height of 1st person in cm:");
   scanf("%f",&height1);
   printf("Enter height of 2nd person in cm:");
   scanf("%f",&height2);

   if(height1>height2){
      printf("The 1st person is taller.");
   }
   else{
      printf("The 2nd person is taller.");
   }

   return 0;

}