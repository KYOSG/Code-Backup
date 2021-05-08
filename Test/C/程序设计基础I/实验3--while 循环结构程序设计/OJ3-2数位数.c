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
    int n, s;
    
    scanf("%d", &n);
    
    s = n * n * n;
    
    printf("%d", s);
    
    return 0;
}
