/*
 Description

  

 给定一个由 n 个整数组成的序列A1，A2，……， An 和两个整数L，R，你的任务是写一个程序来计算序列号在[L，R](这是一个闭区间) 这段位置区间内所有数的总和。

  
 Input

  

 输入只有一组测试数据：

 测试数据的第一行为一个整数 n （1< n < 10000）；

 第二行为 n 个 int 类型的整数；

 第三行为两个整数 L，R（0 < L < R <= n）。
 Output

  

 输出序列号在区间[L，R]内所有数的和，数据保证和在 int 类型范围内。
 Sample

 Input

 5
 3 5 6 2 9
 2 4
 Output

 13
 */
#include<stdio.h>
int main()
{
    int n=0, sum=0, l, r, i;

    scanf("%d", &n);
    
    int a[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &l, &r);

    for (i = l-1; i < r; i++)
    {
        sum = sum + a[i];

    }

    printf("%d\n",sum);
    
    return 0;
}
