/*
 Description
 简单计算器模拟：输入两个整数和一个运算符，输出运算结果。

 Input
 第一行输入两个整数，用空格分开；
 第二行输入一个运算符（+、-、*、/)。
 所有运算均为整数运算，保证除数不包含0。

 Output
 输出对两个数运算后的结果。

 Sample
 Input
 30 50
 *
 Output
 1500
 */
#include <stdio.h>
int main ()
{
    int a, b, sum;
    char c;
    
    scanf("%d %d", &a, &b);
    scanf(" %c", &c);
    
    if (a != 0 && b != 0)
    {
        
        if ('+' == c)
        {
            sum = a + b;
            printf("%d", sum);
        }
        
        else if ('-' == c)
        {
                sum = a - b;
            printf("%d", sum);
        }
        
        else if ('*' == c)
        {
                sum = a * b;
                printf("%d", sum);
        }
        
        else if ('/' == c)
        {
                sum = a / b;
                printf("%d", sum);
        }
    }
    else return 0;
    
    return  0;
    
}
