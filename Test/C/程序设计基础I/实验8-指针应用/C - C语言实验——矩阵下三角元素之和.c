/*
 Description
 输入一个正整数n（1<=n<=10),再输入n*n的矩阵，要求求该矩阵的下三角元素之和。

 Input
 输入包括n+1行。
 第一行为整数n；
 接下来的n行为矩阵数据。

 Output
 矩阵的下三角元素之和。

 Sample
 Input
 5
 1 2 3 4 5
 2 3 4 5 6
 3 4 5 6 7
 4 5 6 7 8
 5 6 7 8 9
 Output
 75
 */
#include<stdio.h>
int f(int (*p)[10],int n);
int main()
{
    int n,i,j;
    int a[10][10];


    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d\n",&a[i][j]);
        }
    }

    printf("%d",f(a,n));

    return 0;
}
int f(int (*p)[10],int n)
{
    int res=0,j,i;

    for(i=0;i<n;i++)
        for (j = 0; j < i+1; j++)
        {
            res+=*(*(p+i)+j);
        }

    return res;
}
