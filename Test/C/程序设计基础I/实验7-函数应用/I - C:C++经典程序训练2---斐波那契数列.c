/*
 Description
 编写计算斐波那契（Fibonacci）数列的第n项函数fib（n）(n < 40)。
 数列描述：
 f1=f2==1;
 fn=fn-1+fn-2(n>=3)。

 Input
 输入整数 n 的值（0 < n < 40)。

 Output
 输出fib(n)的值。

 Sample
 Input
 7
 Output
 13
 Hint
 注意第1项和第2项的输出处理
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

    if (n==1||n==2)
        res=1;
    else
        res=f(n-1)+f(n-2);

    return res;
}
