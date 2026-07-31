#include <stdio.h>

int calculation(int a , int b,int c,int d,int e,int f,int g,int h)
{
   
   int answer=(((a+b)*(c+d))+((e+f)*(g+h)));
   return answer;

}

int main()
{
   int  a , b,c,d,e,f,g,h;
   printf("Enter 8 numbers to perform the calculation for ((a+b)*(c+d))+((e+f)*(g+h)): \n");
   scanf("%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h);

   int ans=calculation(a,b,c,d,e,f,g,h);

   printf("The answer for the calculation performed is %d",ans);
   return 0 ;
}