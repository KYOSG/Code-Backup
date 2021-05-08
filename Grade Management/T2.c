#include <stdio.h>
#define ST_NUM 2 //学生总数，可随需要修改
double average[6];//全局变量定义各科平均分，方便后续使用
typedef struct
{
    int nu;  //序号
    int num;    //学号
    char name[9];   //姓名
    float mark;
    float match;     //数学
    float english;
    float c_language;
    float pe;
    float history;
    float software;
    float sum;
    float average;
}student;
student ST[ST_NUM]={0};

int input()
{

    int i,t;
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
        if(scanf("%d",&ST[i].num)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf("姓名：");
        scanf ("%s",ST[i].name);
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
        if(scanf("%f",&ST[i].c_language)!=1)
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
        if(scanf("%f",&ST[i].history)!=1)
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

void  process()
{
    int i,j;
    double sum[6]={0.0};
    //计算学生平均分
    for(i=0;i<ST_NUM;i++)
    {
        ST[i].sum=ST[i].mark+ST[i].match+ST[i].english+ST[i].c_language+ST[i].pe+ST[i].history+ST[i].software;

        ST[i].average=ST[i].sum/7;
    }
    //赋学分
    for(i=0;i<ST_NUM;i++)
    {
        if(ST[i].match>=60)
            ST[i].mark+=5;
        if(ST[i].english>=60)
            ST[i].mark+=3;
        if(ST[i].c_language>=60)
            ST[i].mark+=3.5;
        if(ST[i].pe>=60)
            ST[i].mark+=2;
        if(ST[i].history>=60)
            ST[i].mark+=2;
        if(ST[i].software>=60)
            ST[i].mark+=2;
    }
    //计算各科平均分
     for(i=0;i<ST_NUM;i++)
     {
         sum[0]+=ST[i].match;
         sum[1]+=ST[i].english;
         sum[2]+=ST[i].c_language;
         sum[3]+=ST[i].pe;
         sum[4]+=ST[i].history;
         sum[5]+=ST[i].software;
     }
    for(i=0;i<6;i++)
    {
        average[i]=(double)sum[i]/ST_NUM;
    }
}

void sort()//排名
{
    student temp;
    int i,j,t,flag=1;
    //依据学分排名
    for(i=0;i<ST_NUM;i++)
    {
        for(j=0;j<ST_NUM-1-i;j++)
        {
            if(ST[j].mark<ST[j+1].mark)
            {
                temp=ST[j];
                ST[j]=ST[j+1];
                ST[j+1]=temp;
            }
        }
    }
    //学分相同时依据平均分的排名
    for (t=0;t<ST_NUM-1;t+=flag)
    {
        flag=1;
        if(ST[t].mark==ST[t+1].mark)
        {
            for(i=t;i<ST_NUM;i++)
            {
                if(ST[i].mark!=ST[i+1].mark)
                {
                    break;
                }
                else
                {
                    flag++;
                }
            }
        }

        if(flag!=1)
        {
            for(i=t;i<t+flag-1;i++)
            {
                for(j=t;j<t+flag-1-i;j++)
                {
                    if(ST[j].mark>ST[j+1].mark)
                    {
                        temp=ST[j];
                        ST[j]=ST[j+1];
                        ST[j+1]=temp;
                    }
                }
            }
        }
    }
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
        printf("%3.2f\t",ST[i].c_language);
        printf("%3.2f\t",ST[i].pe);
        printf("%3.2f\t",ST[i].history);
        printf("%3.2f\t\t",ST[i].software);
        printf("%3.2f\t%3.2f\n",ST[i].sum,ST[i].average);
    }
    printf("\n");
    printf("各科平均分\n\t\t\t\t\t高等数学\t大学英语\tc语言\t大学体育\t近代史\t软件技术导论\n");
    printf("\t\t\t\t");
    for(i=0;i<6;i++)
    {
        printf("\t%.2lf",average[i]);
    }
}

int main()
{
    if(input()==1)
        return 0;
    process();
    sort();
    output();
    return 0;
}
