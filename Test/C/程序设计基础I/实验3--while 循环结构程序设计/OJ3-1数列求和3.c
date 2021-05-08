/*
 
 Description

 正整数序列是指从1开始的序列，例如{1,2,3,4，......}

 给定一个整数 n，现在请你求出正整数序列 1 - n 的和。
 Input

 输入一个整数 n 。（1 <= n <= 1000）
 Output

 输出一个整数，即为正确答案。
 Sample

 Input

 2
 Output

 3
 
 */

#include<stdio.h>
int main ()
{
    int n, i;
    int sum = 0;
    
    scanf("%d", &n);
    i = 1;
    while (i<=n)
    {
        sum = sum + i;
        
        ++i;
    }
    printf("%d\n",sum);
    
    return 0;
}
