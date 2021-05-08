#include <stdio.h>
#define ST_NUM 100 //学生数
typedef struct
{
    int nu;  //序号
    int SNo[11];    //学号
    char Name[9];   //姓名
    int GSHu;     //数学
    int Dying;//大学英语
    int CCHeng;//c语言
    int DTi;//体育
    int JDaiSHi;//现代历史
    int RDao;//软件
    int FDaoYuan;//辅导员评分
    int BZHuRen;//班主任评分
    int Bjin;//班级同学评分
    int GKeFlag;//挂科标记
    double sum;
    double ZHeFen;//综合成绩

}student;
student ST[ST_NUM]={0};

//输入函数
int input(int num)
{
    int i;

    printf ("请输入%d个学生的信息:\n",num);
    for (i=0;i<num;i++)
    {
        printf("序号：");
        if(scanf("%d",&ST[i].nu)!=1)
        {
            printf("输入错误");
            return 1;
        }
        printf ("学号：");
        scanf ("%d",&ST[i].SNo);

        printf("姓名：");
        scanf ("%s",ST[i].Name);

        printf("请输入业务考试成绩：\n");

        printf("高等数学的成绩：");
        if(scanf("%d",&ST[i].GSHu)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("C语言程序设计的成绩：");
        if(scanf("%d",&ST[i].CCHeng)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("大学英语视听一的成绩：");
        if(scanf("%d",&ST[i].Dying)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("软件技术导论成绩：");
        if(scanf("%d",&ST[i].RDao)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("近代史的成绩：");
        if(scanf("%d",&ST[i].JDaiSHi)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("大学体育的成绩：");
        if(scanf("%d",&ST[i].DTi)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("请输入平时表现成绩：\n");

        printf("辅导员评分：");
        if(scanf("%d",&ST[i].FDaoYuan)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("班主任评分：");
        if(scanf("%d",&ST[i].BZHuRen)!=1)
        {
            printf("输入错误");
            return 1;
        }

        printf("同学评分：");
        if(scanf("%d",&ST[i].Bjin)!=1)
        {
            printf("输入错误");
            return 1;
        }
    }
    return 0;
}

//数据处理
void  process(int num)
{
    int i;
    //挂科判断
    for(i=0;i<num;i++)
    {
        if(ST[i].Dying<60)
        {
            ST[i].GKeFlag=1;
            break;
        }
        if(ST[i].CCHeng<60)
        {
            ST[i].GKeFlag=1;
            break;
        }
        if(ST[i].DTi<60)
        {
            ST[i].GKeFlag=1;
            break;
        }
        if(ST[i].JDaiSHi<60)
        {
            ST[i].GKeFlag=1;
            break;
        }
        if(ST[i].RDao<60)
        {
            ST[i].GKeFlag=1;
            break;
        }
        if(ST[i].GSHu<60)
        {
            ST[i].GKeFlag=1;
            break;
        }
    }

    //综合成绩计算;
    for(i=0;i<num;i++)
    {
        ST[i].sum+=(ST[i].Dying+ST[i].CCHeng+ST[i].DTi+ST[i].JDaiSHi+ST[i].RDao)*0.7+(ST[i].FDaoYuan+ST[i].BZHuRen+ST[i].Bjin)*0.3;
    }
}
//排名
void sort(int num)
{
    student temp;
    int i,j,t,flag=0;
    //依据是否挂科排名
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1-i;j++)
        {
            if(ST[j].GKeFlag<ST[j+1].GKeFlag)
            {
                temp=ST[j];
                ST[j]=ST[j+1];
                ST[j+1]=temp;
                flag++;
            }
        }
    }
    //未挂科同学排名
    for (t=0;t<flag-1;t++)
    {
        for(i=t;i<flag-1-t;i++)
        {
            if(ST[i].ZHeFen<ST[i+1].ZHeFen)
            {
                temp=ST[i];
                ST[i]=ST[i+1];
                ST[i+1]=temp;
            }
        }
    }
}

void output(int num)
{
    int i;
    double j1,j2,j3;
    printf("获得奖学金的同学：\n");
    printf("\t\t\t\t奖学金\t序号\t姓名\n");
    j1=num*0.03;
    j2=num*0.07;
    j3=num*0.2;
    //四舍五入
    j1=(int)(j1+0.5);
    j2=(int)(j2+0.5);
    j3=(int)(j3+0.5);
    for (i=0;i<=j1;i++)
    {
        printf("\t\t\t\t一等奖\t%d\t%s\t\n",ST[i].nu,ST[i].Name);
    }
    for (i=j1;i<j2;i++)
    {
        printf("\t\t\t二等奖\t");
        printf("%d\t%s\t\n",ST[i].nu,ST[i].Name);
    }
    for (i=j2;i<j3;i++)
    {
        printf("\t\t\t三等奖\t");
        printf("%d\t%s\t\n",ST[i].nu,ST[i].Name);
    }
}

int main()
{
    int num;
    printf("请输入学生人数：");
    scanf("%d",&num);
    if(input(num)==1)
        return 0;
    process(num);
    sort(num);
    output(num);
    return 0;
}

