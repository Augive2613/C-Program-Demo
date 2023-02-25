#include <stdio.h>
typedef struct
{
    double score;
    int age;
} stu;
typedef struct
{
    double a;
    int b;
} note;

int main()
{
    stu s = {78.5, 22};
    note c = {0, 0};
    stu *p;
    note *q;
    p = &s;
    q->a = p->score;
    q->b = p->age;
    printf("%f %d", q->a, q->b);
}
