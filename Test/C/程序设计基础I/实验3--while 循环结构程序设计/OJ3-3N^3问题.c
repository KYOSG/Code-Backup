/*
 
 Description

 输入一个正整数N，求出N^3的各位数字的立方和。
 Input

  输入N的值。N<=1024
 Output

  问题描述中所要求的数值。
 Sample

 Input

 3
 Output

 351
 
 */
#include <stdio.h>
int main()
{
    int n, c, a, sum=0;
    
    scanf("%d", &n);
    
    n = n * n * n;
    
    while(n>0)
    {
        a = n % 10;
        n = n / 10;
        c = a * a * a;
        sum = sum + c;
    }
    printf("%d\n",sum);
}
