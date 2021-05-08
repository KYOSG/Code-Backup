/*
 Description
 输入三个整数a,b,c。并进行两两相加，最后比较相加和的最大值。
 Input
 输入数据包含三个整数，用空格分开。
 Output
 输出两两相加后的最大值。
 Sample
 Input
 1 2 3
 Output
 5
 */
#include<stdio.h>
int main()
{
    
    int a, b, c, d, e, f, t, max;
    
    scanf("%d %d %d",&d,&e,&f);
    
    a = d + e;
    b = d + f;
    c = e + f;
    
    
    
    if(a>b)
    {
        t=a;
        a=b;
        b=t;
        
    }
    if(a>c)
    {
        t=a;
        a=c;
        c=t;
        
    }
    if(b>c)
    {
        t=b;
        b=c;
        c=t;
        
    }
    max=c;
    
    printf("%d\n",max);
    return 0;
    
    
    return 0;
    
}
