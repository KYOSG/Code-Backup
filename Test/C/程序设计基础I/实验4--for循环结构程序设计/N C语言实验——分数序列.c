/*
 Description

 有一个分数序列：2/1, 3/2, 5/3, 8/5, 13/8, …编写程序求出这个序列的前n项之和。
 Input

 输入只有一个正整数n，1≤n≤10。
 Output

 输出该序列前n项和，结果保留小数后6位。
 Sample

 Input

 3
 Output

 5.166667
 */
#include<stdio.h>
int main()
{
    int x=1,y=2,n = 0,i,t;
    double sum=0.0;
    
    scanf("%d", &n);
    
    for (i=0; i<n; i++)
    {
        sum= sum+(double)y/x;
        t = y;
        y = x+y;
        x=t;

    }
    
    printf("%.6lf\n",sum);
     
    return 0;
}
