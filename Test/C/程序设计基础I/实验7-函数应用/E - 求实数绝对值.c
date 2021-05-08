/*
 Description
 求实数的绝对值。
 Input
 输入数据有多组，每组占一行，每行包含一个实数。输入文件直到EOF为止！
 Output
 对于每组输入数据，输出它的绝对值，要求每组数据输出一行，结果保留两位小数。
 Sample
 Input
 123
 -234.00
 Output
 123.00
 234.00
 Hint
 EOF结束的语句是这样使用的，今后还后很多这样的题目，千万要记住哦...

 while (scanf("%f",&a)!=EOF)
 {         }
  
 如果输入数据有多组，每组占一行。

 每行有两个整数a和n，分别用空格分隔。

 读到文件结束的输入形式为：
  
 while (scanf("%d %d",&a,&n)!=EOF)
 {        }
 */
#include<stdio.h>
#include<math.h>
double f(double n);
int main()
{
    double n;

    while(~scanf("%lf",&n))
    {
        printf("%.2lf\n",f(n));
    }

    return 0;
}

double f(double n)
{
    if(n<0)
    {
        n=-n;
    }

    return n;
}
