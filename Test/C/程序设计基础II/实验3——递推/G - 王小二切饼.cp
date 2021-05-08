/*
 王小二自夸刀工不错，有人放一张大的煎饼在砧板上，问他：“饼不许离开砧板，切n(1<=n<=100)刀最多能分成多少块？”

 输入格式:
 输入切的刀数n。

 输出格式:
 输出为切n刀最多切的饼的块数。

 输入样例:
 100
 输出样例:
 5051
 */
#include<stdio.h>
#define ll long long

int main()
{
    int n;
    ll a[110];
    scanf("%d",&n);
    a[0]=1;
    a[1]=2;
    a[2]=4;

    for(int i=1;i<=n;i++)
    {
        a[i]=a[i-1]+i;
    }

    printf("%lld",a[n]);


    return 0;
}
