/*
 Description

 输入两个整数，请编程求其中的较大者。
 Input

 在一行中输入用空格隔开的两个整数，例如5 9。
 Output

 输出两个整数之中较大者，输出形式举例：max=9。
 Sample

 Input

 5 9
 Output

 max=9
 */
#include<stdio.h>
int main ()
{
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    if (a>b)
        printf("max=%d", a);
    else
        printf("max=%d", b);
    
    
    return 0;
    
}
