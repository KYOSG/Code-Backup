/*
 Description
 一个简单的计算，你需要计算f(m,n)，其定义如下：
 当m=1时，f(m,n)=n；
 当n=1时，f(m,n)=m；
 当m>1,n>1时，f(m,n)= f(m-1,n)+ f(m,n-1)
 Input
 第一行包含一个整数T（1<=T<=100），表示下面的数据组数。
 以下T行，其中每组数据有两个整数m，n（1<=m，n<=2000），中间用空格隔开。
 Output
 对每组输入数据，你需要计算出f(m,n)，并输出。每个结果占一行。
 Sample
 Input
 2
 1 1
 2 3
 Output
 1
 7
 */
#include<stdio.h>
int f(int m,int n);
int main()
{
    int n,m,T;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d %d",&m,&n);
        printf("%d\n",f(m,n));
    }

    return 0;
}
int f(int m,int n)
{
    int res;

    if (m==1)
        res=n;
    else if(n==1)
        res=m;
    else if(m>1&&n>1)
        res=f(m-1,n)+f(m,n-1);

    return res;
}
