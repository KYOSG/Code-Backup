/*
 Description

 输入两个正整数，求它们的最大公约数与最小公倍数。
 Input

 输入两个正整数，两个整数之间用空格分开。

 数据保证在 int 范围内。
 Output

 第一行输出最大公约数；
 第二行输出最小公倍数。

 答案保证在 int 范围内。
 Sample

 Input

 64 48
 Output

 16
 192
 */
#include<stdio.h>
int main()
{
    int a,b,i,temp;
    int max,min;
    
    scanf("%d %d",&a, &b);
    if (b>a)
    {
        temp=a;
        a=b;
        b=temp;
    }
    else
    {
        a=a;
        b=b;
    }
    i=a;
    while(i>0)//最大公因数
    {
        if ((a%i==0)&&(b%i==0))
        {
//            printf("%d\n",i);
            min=i;
            break;
        }
        else
            i--;
    }
    //最小公倍数是两数乘积除以最大公约数
    max=a*b/min;
    printf("%d\n%d\n",min, max);
    return 0;
}

