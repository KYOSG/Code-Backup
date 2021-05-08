/*
 Description

 输入n值，并利用下列格里高里公式计算并输出圆周率：

 Input

 输入公式中的n值。
 Output

 输出圆周率，保留5位小数。
 Sample

 Input

 1
 Output

 2.66667
 */

#include<stdio.h>
int main()
{
    int n = 0,i;
    double pi = 0.0;
    
    scanf("%d",&n);
    
    for (i=1; i<=n; i++)
    {
            pi=pi+(1.0/(4*i-3));
            pi=pi-(1.0/(4*i-1));
    }
    printf("%.5lf\n",4*pi);
    return 0;
}
