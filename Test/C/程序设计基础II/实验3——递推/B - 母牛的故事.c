/*
 Description

 有一对夫妇买了一头母牛，它从第2年起每年年初生一头小母牛。每头小母牛从第四个年头开始，每年年初也生一头小母牛。请编程实现在第n年的时候，共有多少头母牛？
 Input

 输入为一个整数n(0< n< 55)。
 Output

 输出在第n年的时候母牛的数量。
 Sample

 Input

 5
 Output

 6
 */
#include<stdio.h>
int main()
{
    int n;
    long long int sum[90];
    int i;

    scanf("%d",&n);
    sum[1]=1;
    sum[2]=2;
    sum[3]=3;
    sum[4]=4;
    for(i=5;i<=n;i++)
    {
        sum[i]=sum[i-1]+sum[i-3];
    }

    printf("%lld",sum[n]);

    return 0;
}
