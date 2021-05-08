/*
 
 Description

 有如下分段函数
 F(x) = x^2 + 1   当x> 0时；
 F(x) = -x   当x<0时；
 F(x) = 100.0  当x=0时；
 编程根据输入的不同x（x为实数），输出其对应的函数值
 Input

 多组输入，每组一个实数x。处理到文件结束。
 Output

 对于每组输入x，输出其对应的F(x),每组一行，结果保留1位小数。
 Sample

 Input

 8.00
 -5.0
 Output

 65.0
 5.0

 
 */
#include <stdio.h>
int main ()
{
    double x;
    
    while (scanf("%lf", &x) != EOF)
    {
        if (0 < x )
        {
            x = x * x +1;
            printf("%.1lf\n", x);
        }
        else if (0 > x)
        {
            x = -x;
            printf("%.1lf\n", x);
        }
        else
        {
            x = 100;
            printf("%.1lf\n", x);
        }
    }
    
    
    return 0;
}
