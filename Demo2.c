#include <stdio.h>
/*int main ()
{
    int x=10, y=20, t;
    t=x,x=y,y=t;
    printf("x=%d,y=%d",x,y);
    return 0 ;
}*/

void swap(int x,int y);
main()
{
    int x = 10,y = 20;
    swap(x,y);
}
void swap(int a,int b)
{
    int t;
    t = a,a = b,b = t;
    printf (" a = %d   b = %d\n",a,b);
}