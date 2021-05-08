#include <stdio.h>
#define ST_NUM 2 //学生数
typedef struct
{
    int nu;  //序号
    int num;    //学号
    char name[9];   //姓名
    float mark;     //学分
    float match;     //数学
    float english;
    float c;
    float pe;
    float modern_history;
    float software;
    float sum;
    float average;
}student;
student ST[ST_NUM];

int input()
{

    int i;
    printf ("请输入%d个学生的信息:\n",ST_NUM);
    for (i=0;i<ST_NUM;i++)
    {
        printf("序号：");
        if(scanf("%d",&ST[i].nu)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf ("学号：");
        scanf ("%d",&ST[i].num);
        printf("姓名：");
        scanf ("%s",ST[i].name);
        printf("获得学分：");
        if(scanf("%f",&ST[i].mark)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf("高等数学的成绩：");
        if(scanf("%f",&ST[i].match)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("大学英语的成绩：");
        if(scanf("%f",&ST[i].english)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf("C语言程序设计的成绩：");
        if(scanf("%f",&ST[i].c)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf("大学体育的成绩：");
        if(scanf("%f",&ST[i].pe)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf("中国近代史纲要的成绩：");
        if(scanf("%f",&ST[i].modern_history)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf("软件技术导论成绩：");
        if(scanf("%f",&ST[i].software)!=1)
        {
            printf("输入错误");
            return 1;
        }

    }
    return 0;
}

void output()
{
    int i;
    printf("序号\t学号\t姓名\t");
    printf("获得学分\t高等数学\t大学英语\tc语言\t大学体育\t近代史\t软件技术导论\t总分\t\t平均分\n");



    for (i=0;i<ST_NUM;i++)
    {
        printf("%d\t%d\t%s\t",ST[i].nu,ST[i].num,ST[i].name);
        printf("%3.2f\t",ST[i].mark);
        printf("%3.2f\t",ST[i].match);
        printf("%3.2f\t",ST[i].english);
        printf("%3.2f\t",ST[i].c);
        printf("%3.2f\t",ST[i].pe);
        printf("%3.2f\t",ST[i].modern_history);
        printf("%3.2f\t\t",ST[i].software);
        printf("%3.2f\t%3.2f\n",ST[i].sum,ST[i].average);
    }
}

void  process()
{
    int i;
    for(i=0;i<ST_NUM;i++)
    {
        ST[i].sum=ST[i].mark+ST[i].match+ST[i].english+ST[i].c+ST[i].pe+ST[i].modern_history+ST[i].software;

        ST[i].average=ST[i].sum/7;
    }
}

int main()
{
    if(input()==1)
        return 0;
    process();
    output();
    return 0;
}
