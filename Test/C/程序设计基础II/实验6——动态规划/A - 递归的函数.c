/*
 Description

 给定一个函数 f(a, b, c)：
 如果 a ≤ 0 或 b ≤ 0 或 c ≤ 0 返回值为 1；
 如果 a > 20 或 b > 20 或 c > 20 返回值为 f(20, 20, 20)；
 如果 a < b 并且 b < c 返回 f(a, b, c−1) + f(a, b−1, c−1) − f(a, b−1, c)；
 其它情况返回 f(a−1, b, c) + f(a−1, b−1, c) + f(a−1, b, c−1) − f(a-1, b-1, c-1)。
 看起来简单的一个函数？你能做对吗？
 Input

 输入包含多组测试数据，对于每组测试数据：
 输入只有一行为 3 个整数a, b, c(a, b, c < 30)。
 Output

 对于每组测试数据，输出函数的计算结果。
 Sample

 Input

 1 1 1
 2 2 2
 Output

 2
 4

 */
#include<stdio.h>
#include<string.h>
int dp[30][30][30];
int f(int a,int b,int c)
{
    int res;
    if(a<=0||b<=0||c<=0)
        return 1;
    if(a>20||b>20||c>20)
        return f(20,20,20);
    if(dp[a][b][c]!=0)
        return dp[a][b][c];
    if(a<b&&b<c)
        res = f(a, b, c-1) + f(a, b-1, c-1) - f(a, b-1, c);
    else
        res = f(a-1, b, c) + f(a-1, b-1, c) + f(a-1, b, c-1) - f(a-1, b-1, c-1);
    return dp[a][b][c]=res;
}
int main()
{
    int a,b,c;
    memset(dp,0,sizeof(dp));
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        printf("%d\n",f(a,b,c));
    }
    return 0;
}
