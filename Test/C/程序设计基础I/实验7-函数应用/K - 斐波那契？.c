/*
 Description
 给出一个数列的递推公式，希望你能计算出该数列的第N个数。递推公式如下：

 F(n)=F(n-1)+F(n-2)-F(n-3). 其中，F(1)=2, F(2)=3, F(3)=5.

 很熟悉吧，可它貌似真的不是斐波那契数列呢，你能计算出来吗？

 Input
    输入只有一个正整数N(N>=4).

 Output
    输出只有一个整数F(N).

 Sample
 Input
 5
 Output
 8
 */
#include<stdio.h>
int f(int n);
int main()
{
    int n;

    scanf("%d",&n);

    printf("%d\n",f(n));

    return 0;
}

int f(int n)
{
    int res;

    if (n==1)
        res=2;
    else if(n==2)
        res=3;
    else if(n==3)
        res=5;
    else if(n>=4)
        res=f(n-1)+f(n-2)-f(n-3);
    return res;
}
