/*
 Description
 已知三角形的边长a、b和c，求其面积。

 Input
 输入三边a、b、c。

 Output
 输出面积，保留3位小数。

 Sample
 Input
 1 2 2.5
 Output
 0.950
 Hint
 海伦公式求三角形面积。如果三角形的三边为a, b, c且p=(a+b+c)/2，则三角形面积为（p*（p-a) * (p - b) * (p -c)）的平方根。
 */
#include<stdio.h>
#include<math.h>
double f(double a,double b,double c);
int main()
{
    double a,b,c;

    scanf("%lf %lf %lf",&a,&b,&c);

    printf("%.3lf",f(a,b,c));

    return 0;
}

double f(double a,double b,double c)
{
    double res,p;

    p=(a+b+c)/2;

    res=sqrt(p*(p-a) * (p - b) * (p -c));

    return res;
}
