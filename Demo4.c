#include <stdio.h>
int main()
{
    int a;
    printf("Enter a mark:");
    scanf("%d", &a);
    printf("a=%d:", a);
    switch (a / 10)
    {
        case 1:
        case 2:
            printf("m=1");
            break;
        case 3:
            printf("m=2");
            break;
        case 4:
            printf("m=3");
            break;
        case 5:
            printf("m=4");
            break;
        default:
            printf("m=5");
            break;
    }
}