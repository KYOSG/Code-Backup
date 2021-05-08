/*
 Description

 神奇的函数是这样被定义的：
 F(n, m) = {
     if(n == 1 || m == 1)
         F(n, m) = 1;
     else
         F(n, m) = F(n-1, m) + F(n, m-1);
 }
 Input

 第一行是正整数N (1 <= N<= 30)，表示有N组数据。

 接下来N行，每行两个整数n，m (1 <= n, m <= 10)。
 Output

 输出N行。每行输出一个整数表示F(n,m)。
 Sample

 Input

 1
 1 2
 Output

 1
 */
#include<stdio.h>
long long int f(int n,int m);

int main()
{
    int n,m,N;
    int i,j;
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d %d",&n,&m);
        printf("%lld\n",f(n,m));
    }



    return 0;
}
long long int f(int n,int m)
{
    if(n == 1 || m == 1)
        return 1;
    else
        return f(n-1, m) + f(n, m-1);

}
