/*
 Description

 输入一个三位正整数，将它反向输出。
 Input

 3位正整数。
 Output

 逆置后的正整数。

 */
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    
    scanf("%d", &a);
    
    b = a / 100;
    c = (a / 10 - b * 10);
    d = a - b * 100 - c * 10;
    
    e = (d * 100) + (c * 10) + b;
    
    printf("%d", e);
    
    return 0;
}
