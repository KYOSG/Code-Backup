/*
 Description
 给出两个数 n, m。求 3748-1 和 3748-2。

 计算公式：

 3748-3

 Input
 输入数据有多组（数据组数不超过 250），到 EOF 结束。

 对于每组数据，输入两个用空格隔开的整数 n, m (0 <= m <= n <= 20) 。

 Output
 对于每组数据输出一行， 3748-1 和 3748-2，用空格隔开。

 提醒：因为n!和 m! 数据较大，定义数据类型应用 long long int，输出格式%lld

 Sample
 Input
 1 1
 5 3
 4 3
 Output
 1 1
 60 10
 24 4
 Hint
 请注意数据范围，可能需要使用 long long 等 64 位整型，输出格式%lld
 */
#include<stdio.h>
long long int f(long long int n);
int main()
{
    long long int n,m,t;

    while(scanf("%lld %lld",&n,&m)!=EOF)
    {
        t=f(n)/f(n-m);
        printf("%lld %lld\n",t,t/f(m));
    }

    return 0;
}
long long int f(long long int n)
{
    long long int sum=1;
    int i;

    for(i=1;i<=n;i++)
    {
        sum=sum*i;
    }
    return sum;
}
