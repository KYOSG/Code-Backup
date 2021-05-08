/*
 Description

 期末考试结束了，老师想要根据学生们的成绩划分出等级。共有5个等级A,B,C,D和E。
 划分方法如下，90分（含90）以上的为A,80~90（含80）间的为B,70~80（含70）间的为C，
 60~70（含60）的为D，不及格的为E。
 根据输入的成绩，编程输出各个级别段人数。
  
 Input

 输入第一行包含一个正整数N（N<= 100）代表学生的数目，接下来有N行数据每行一个整数（0~100）代表
 一个学生的成绩。
 Output

 输出有五行格式如下：
 A nA
 B nB
 C nC
 D nD
 E nE
 其中A,B,C,D,E代表等级，nA，nB等代表个等级的人数，等级和人数之间有一个空格。
 Sample

 Input

 6
 66
 73
 85
 99
 100
 59
 Output

 A 2
 B 1
 C 1
 D 1
 E 1
 */
#include<stdio.h>
int main()
{
    int i,na = 0,nb = 0,nc = 0,nd = 0 ,ne= 0 ,mark = 0;
    
    
    
    for (scanf("%d",&i); i>0; i--)
    {
        scanf("%d",&mark);
        if (mark>=90)
        {
            na++;
        }
        else if(mark>=80)
        {
            nb++;
        }
        else if(mark>=70)
        {
            nc++;
        }

        else if(mark>=60)
        {
            nd++;
        }

        else
        {
            ne++;
        }

    }

    printf("A %d\nB %d\nC %d\nD %d\nE %d\n",na,nb,nc,nd,ne);

    return 0;
}
