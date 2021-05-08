/*
 Description
 学校的大学生艺术中心周日将面向全校各个学院的学生社团开放，但活动中心同时只能供一个社团活动使用，并且每一个社团活动开始后都不能中断。现在各个社团都提交了他们使用该中心的活动计划（即活动的开始时刻和截止时刻）。请设计一个算法来找到一个最佳的分配序列，以能够在大学生艺术中心安排不冲突的尽可能多的社团活动。
 比如有5个活动，开始与截止时刻分别为：



 最佳安排序列为：1,4,5。

 Input
 第一行输入活动数目ｎ（0<ｎ<100）；
 以后输入ｎ行，分别输入序号为1到ｎ的活动使用中心的开始时刻ａ与截止时刻ｂ（a,b为整数且0<=a,b<24，a,b输入以空格分隔）。

 Output
 输出最佳安排序列所包含的各个活动（按照活动被安排的次序，两个活动之间用逗号分隔），如果有多个活动安排序列符合要求输出字典序最小的序列。

 Sample
 Input
 6
 8 10
 9 16
 11 16
 14 15
 10 14
 7 11
 Output
 1,5,4
 */
#include<iostream>

using namespace std;

struct Node
{
    int st;
    int end;
    int num;
};

int main()
{
    int n;
    Node a[110]={0};

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i].st>>a[i].end;

        a[i].num=i+1;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].end>a[j+1].end)
            {
                swap(a[j],a[j+1]);
            }
        }
    }

    printf("%d",a[0].num);

    int t=a[0].end;
    for(int i=1;i<n;i++)
    {
        if(a[i].st>=t)
        {
            printf(",%d",a[i].num);
            t=a[i].end;
        }
    }


    return 0;
}
