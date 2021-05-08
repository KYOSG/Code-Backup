/*
 Description

 一对成熟的兔子每天能且只能产下一对小兔子，每次都生一公一母，每只小兔子的成熟期是1天，小兔子出生后隔一天才能再生小兔子。第一天某人领养了一对成熟的兔子，一公一母，请问第N天以后，他将会得到多少对兔子。
 Input

 输入为一个整数n(1 ≤ n ≤ 90)。
 Output

 对应输出第n天有几对兔子(假设没有兔子死亡现象，而且是一夫一妻制)。
 Sample

 Input

 2
 Output

 2
 Hint

 数据类型可以用64位整数:long long
 */
#include<stdio.h>
int main()
{
    int n;
    long long int sum[90];
    int i;

    scanf("%d",&n);
    sum[0]=1;
    sum[1]=2;
    for(i=2;i<n;i++)
    {
        sum[i]=sum[i-1]+sum[i-2];
    }

    printf("%lld",sum[n-1]);

    return 0;
}
