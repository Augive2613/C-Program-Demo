#include <stdio.h>
#include <stdlib.h>
#define N 5
struct stud
{
    char num[5], name[10];
    int s[4];
    double ave;
};
void readrec(struct stud *p)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        p[i].ave = 0;
        printf("请输入学生的学号、姓名：");
        scanf("%s %s", p[i].num, p[i].name);
        printf("请输入学生的四项成绩：");
        for (j = 0; j < 4; j++)
        {
            scanf("%3d", &p[i].s[j]);
            p[i].ave += p[i].s[j] / 4.0;
        }
    }
}
void writerec(struct stud *p)
{
    int i, j;
    for (i = 0; i < N; i++)
    {
        printf("学生的学号、姓名为：%s %c\n", p[i].num, p[i].name);
        printf("学生的四项成绩");
        for (j = 0; j < 4; j++)
        {
            printf("%3d", p[i].s[j]);
            printf("平均分：%lf", p[i].ave);
        }
    }
}
int main()
{
    struct stud p[N];
    readrec(p);
    writerec(p);
    return 0;
}
