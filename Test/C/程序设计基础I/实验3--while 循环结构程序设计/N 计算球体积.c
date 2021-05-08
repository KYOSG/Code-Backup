/*
 Description
 
 根据输入的半径值，计算球的体积。
 Input

 输入数据有多组，每组占一行，每行包括一个实数，表示球的半径。
 Output

 输出对应的球的体积，对于每组输入数据，输出一行，计算结果保留三位小数。
 Sample

 Input

 1
 1.5
 Output

 4.189
 14.137
 Hint

 已知 PI = 3.1415927

 #define PI 3.1415927
 */
#include<stdio.h>
#define PI 3.1415927

int main()
{
    double r;
    double v=0;
    
    while (scanf("%lf", &r)!=EOF)
    {
        v = (4.0*PI*r*r*r)/3.0;
        printf("%.3lf\n", v);
    }
    
    return 0;
}
