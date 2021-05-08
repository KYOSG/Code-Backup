/*
 Description
 在2×n的一个长方形方格中,用一个1× 2的骨牌铺满方格,输入n ,输出铺放方案的总数. 例如n=3时,为2× 3方格，骨牌的铺放方案有三种,如下图：


 Input
 输入包含一个整数n,表示该测试实例的长方形方格的规格是2×n (0< n<=50)。

 Output
 输出铺放方案的总数。

 Sample
 Input
 3
 Output
 3
 */
#include<stdio.h>
#define ll long long
int main()
{
    ll a[55]={0};

    int n;

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
