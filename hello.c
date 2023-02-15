#include <stdio.h>
int main()
{
    int i;
    double sum=1,a=1;
    for(i=1;i<50;i++) 
     {
         a=a*i;
         sum=sum+(1/a);
     }

   printf("%lf",sum);
   return 0;
}