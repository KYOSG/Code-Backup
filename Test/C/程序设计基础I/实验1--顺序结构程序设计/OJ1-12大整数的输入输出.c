/*
 Description

 输入两个 long long 范围内的整数，输出他们的和。
 Input

 两个 long long 范围内的整数。
 Output

 输出的两个大整数的和，保证结果在 long long 范围内。

 */
#include <stdio.h>
int main()
{
    long long a,b,c;
    
    scanf("%lld %lld", &a, &b);
    
    c = a + b;
    
    printf("%lld",c);
    
    return 0;
}
