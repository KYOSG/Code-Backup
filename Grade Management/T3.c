#include<stdio.h>
#include<stdlib.h>
#define NUM 30//定义最大学生数
typedef struct
{
    int no;
    int score;
}Student;

void create(Student a[],int n);
void display(Student a[],int n);
void findchj(int chj,Student a[],int n);
void findsxh(int sxh,Student a[],int n);
void sort_big(Student a[],int n);
void sort_small(Student a[],int n);
void insert(int sxh,int chj,Student a[],int n);
void remov(int sxh,Student a[],int *n);//remove函数名已在库函数中声明，故不能用在此处
void replace(int sxh,Student a[],int n);

void main()
{
    Student stu[NUM]={0};
    int n=0;
    int flag=0;
    int choice;
    int chj,sxh;


    system("cls");//系统命令：清除控制台显示的内容
    system("color f0");//系统命令：设置控制台背景颜色
    do
    {
        printf("1.成绩录入      2.成绩显示     3.按成绩查找\n");
        printf("4.按序号查找    5.成绩递减排序  6.成绩递增排序\n");
        printf("7.插入成绩      8.删除成绩     9.修改成绩\n");
        printf("0.退出系统\n\n");

        printf("请输入您的选择：");
        scanf("%d",&choice);
        fflush(stdin);//刷新输入缓冲区，清除缓冲区内容

        switch(choice)
        {
            case 1:
                if(flag==0)
                {
                    printf("请输入学生人数：");
                    scanf("%d",&n);
                    create(stu,n);
                    display(stu,n);
                    flag=1;
                }
                else if (flag==1)
                    printf("成绩数据库已建立，请不要重复建立\n");
                break;

            case 2:
                if (flag==1)
                    display(stu,n);
                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;
            case 3:
                if (flag==1)
                {
                    printf("请输入要查询的成绩\n");
                    scanf("%d",&chj);
                    findchj(chj,stu,n);
                }

                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;

            case 4:
                if (flag==1)
                {
                    printf("请输入要查询的序号\n");
                    scanf("%d",&sxh);
                    if(sxh>n||sxh<=0)
                    {
                        printf("顺序号超出范围，不能操作\n");
                        break;
                    }
                    else
                        findsxh(sxh,stu,n);
                }
                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;

            case 5:
                if (flag==1)
                {
                    sort_big(stu,n);
                    printf("降序排序完成\n");
                }
                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;

            case 6:
                if (flag==1)
                {
                    sort_small(stu,n);
                    printf("升序排序完成\n");
                }
                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;
            case 7:
                if (flag==1)
                {
                    printf("请以空格分隔输入要插入的序号及成绩：");
                    scanf("%d %d",&sxh,&chj);
                    if(sxh>n||sxh<=0)
                    {
                        printf("顺序号超出范围，不能操作\n");
                        break;
                    }
                    else
                        insert(sxh,chj,stu,n);
                }
                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;

            case 8:
                if (flag==1)
                {
                    printf("请输入要删除的顺序号：");
                    scanf("%d", &sxh);
                    if(sxh>n||sxh<=0)
                    {
                        printf("顺序号超出范围，不能操作\n");
                        break;
                    }
                    else
                        remov(sxh,stu,&n);
                }
                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;
            case 9:
                if (flag==1)
                {
                    printf("请输入要修改的顺序号：");
                    scanf("%d",&sxh);
                    if(sxh>n||sxh<=0)
                    {
                        printf("顺序号超出范围，不能操作\n");
                        break;
                    }
                    else
                        replace(sxh,stu,n);
                }
                else if (flag==0)
                    printf("数据库为空，请先建立数据库\n");
                break;
            case 0:printf("\n\t\t\t欢迎你再次使用，再见！\n");
                exit(0);
            default:
                printf("\n \t\t\t对不起，您的选择有误，请重新输入！！ \n");
        }

        system("pause");//系统命令：暂停程序运行
        system("cls");//系统命令：清除控制台显示的内容
    }while(1);
}
//建立成绩数组
void create(Student a[],int n)
{
    int i,t;
    printf("请依次输入成绩，成绩之间用空格或回车分隔并以数字'000'结束输入\n");
    printf("请输入数据：");
    for (i=0;i<n;i++)
    {
        a[i].no=i+1;
        scanf("%d",&t);
        if(t==000)
        {
            printf("输入结束\n");
            break;
        }
        else
            a[i].score=t;
    }
    printf("数据库建立完成\n");
    printf("\n");
}
//显示成绩
void display(Student a[],int n)
{
    int i;
    printf("序号\t成绩\t\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%d\n",a[i].no,a[i].score);
    }
    printf("\n");
}
//按给定成绩查找
void findchj(int chj,Student a[],int n)
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i].score==chj)
        {
            if(flag==0)
            {
                printf("序号\t成绩\t\n");//因为该语句嵌套与for循环中故设立标记让该语句仅执行一次
                flag=1;
            }
            printf("%d\t%d\n",a[i].no,a[i].score);
        }
    }
    if(flag==0)
        printf("输入的成绩没有对应的学生\n");
    printf("\n");
}
//按给定顺序号查找
void findsxh(int sxh,Student a[],int n)
{
    printf("序号\t成绩\t\n");
    printf("%d\t%d\n",a[sxh-1].no,a[sxh-1].score);
    printf("\n");
}
//从高到低排序
void sort_big(Student a[],int n)
{
    int i,j;
    Student temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j].score<a[j+1].score)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("降序排序完成\n");
    printf("\n");
}
//从低到高排序
void sort_small(Student a[],int n)
{
    int i,j;
    Student temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j].score>a[j+1].score)
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("升序排序完成\n");
    printf("\n");
}
//按给定顺序号插入成绩
void insert(int sxh,int chj,Student a[],int n)
{
    int i;
    Student temp;
    for(i=n-1;i>=sxh;i--)
    {
        a[i].score=a[i-1].score;
    }
    a[sxh-1].score=chj;
    printf("\n");
}
//按给定顺序号删除成绩
void remov(int sxh,Student a[],int *n)
{
    int i;
    int t=*n;
    for(i=sxh-1;i<t-1;i++)
    {
        a[i].no=a[i+1].no;
        a[i].score=a[i+1].score;
    }
    a[t-1].score=0;
    a[t-1].no=0;
    printf("\n");
}
//按给定顺序号修改成绩
void replace(int sxh,Student a[],int n)
{
    printf("当前顺序号的成绩为：%d\n",a[sxh-1].score);
    printf("请输入修改后的成绩：");
    scanf("%d",&a[sxh-1].score);
    printf("\n");
}
