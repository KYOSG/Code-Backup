/*
 Description
 小明是个非常无聊的人，他每天都会思考一些奇怪的问题，比如爬楼梯的时候，他就会想，如果每次可以上一级台阶或者两级台阶，那么上 n 级台阶一共有多少种方案？

 Input
 输入只有一行为一个正整数 n(1 ≤ n ≤ 50)。

 Output
 输出符合条件的方案数。
 注意：64-bit 整型请使用 long long 来定义，并且使用 %lld 或 cin、cout 来输入输出，请不要使用 __int64 和 %I64d。

 Sample
 Input
 4
 Output
 5
 */
#include<stdio.h>
#define ll long long
int main()
{
    int n;
    ll a[55];

    scanf("%d",&n);

    a[0]=0;
    a[1]=1;
    a[2]=2;
    a[3]=3;

    for(int i=3;i<=n;i++)
    {
        a[i]=a[i-1]+a[i-2];
    }

    printf("%lld",a[n]);
    return 0;
}
