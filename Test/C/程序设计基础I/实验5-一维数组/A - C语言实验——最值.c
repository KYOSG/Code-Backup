/*
 Description

 有一个长度为n的整数序列，其中最大值和最小值不会出现在序列的第一和最后一个位置。
 请写一个程序，把序列中的最小值与第一个数交换，最大值与最后一个数交换。输出转换好的序列。
 Input

 输入包括两行。
 第一行为正整数n（1≤n≤10）。
 第二行为n个正整数组成的序列。
 Output

 输出转换好的序列。数据之间用空格隔开。
 Sample

 Input

 6
 2 3 8 1 4 5
 Output

 1 3 5 2 4 8
 */
#include<stdio.h>
int main()
{
    int n,i,t=0,t2=65535,temp,ima=0,imi=0;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }//输入

    for(i=0;i<n;i++)//选出最大最小值
    {
        if(a[i]>=t)//最大
        {
            t=a[i];
            ima=i;
        }

        if(a[i]<=t2)//最小
        {
            t2=a[i];
            imi=i;
        }
    }

    temp=a[0];
    a[0]=a[imi];
    a[imi]=temp;

    temp=a[n-1];
    a[n-1]=a[ima];
    a[ima]=temp;

    for (i=0;i<n;i++)//输出
    {
        if(i==0)
            printf("%d",a[0]);
        else
            printf(" %d", a[i]);
    }

    return 0;
}
