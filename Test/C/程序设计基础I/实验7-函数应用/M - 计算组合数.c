/*
 Description
 计算组合数。C(n,m),表示从n个数中选择m个的组合数。
 计算公式如下：
 若：m=0，C(n,m)=1
 否则， 若 n=1，C(n,m)=1
              否则，若m=n，C(n,m)=1
                          否则 C(n,m) = C(n-1,m-1) + C(n-1,m).

  

 Input
 第一行是正整数N，表示有N组要求的组合数。接下来N行，每行两个整数n，m (0 <= m <= n <= 20)。

 Output
 输出N行。每行输出一个整数表示C(n,m)。
 Sample
 Input
 3
 2 1
 3 2
 4 0
 Output
 2
 3
 1
 */
#include<stdio.h>
#include<math.h>
int c(int n,int m);
int main()
{
    int t,m,n;

    scanf("%d",&t);

    while(t--)
    {
        scanf("%d %d",&n, &m);
        printf("%d\n",c(n,m));
    }

    return 0;
}

int c(int n,int m)
{
    int res;

    if(n==1||m==0||n==m)
    {
        res=1;
    }
    else
    {
        res=c(n-1,m-1)+c(n-1,m);
    }
    return res;
}
