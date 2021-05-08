/*
 在古希腊时期，有一天毕达哥拉斯走在街上，在经过铁匠铺前他听到铁匠打铁的声音非常好听，于是驻足倾听。他发现铁匠打铁节奏很有规律，这个声音的比例被毕达哥拉斯用数学的方式表达出来。

 这个比例就叫做黄金分割比，它是指将整体一分为二，较大部分与整体部分的比值等于较小部分与较大部分的比值，其比值约为0.6180339887。这个比例被公认为是最能引起美感的比例，因此被称为黄金分割。

 现在小玉有一个正整数数列，这个数列的前一项和后一项的比值十分趋近于黄金分割比，即（a[i]）/（a[i+1]）~ 0.6180339887，(i>=1)，可是她只知道数列的第一项是5，现在她想通过已有条件推断出数列的任意项，请你帮助她编写一个程序计算。（请留意题目提示）

 输入格式:
 每次输入一个整数n（1<=n<=20）

 输出格式:
 输出一个数，代表这个数列的第n项a[n]。

 输入样例:
 1
 输出样例:
 5
 */
#include<stdio.h>
int main()
{
    int n,i;
    int a[20];
    a[0]=5;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        a[i]=(a[i-1]/0.6180339887)+0.5;
    }

    printf("%d\n",a[n-1]);

    return 0;
}
