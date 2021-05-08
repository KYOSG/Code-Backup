/*
 Description
 请编写程序，输入三个整数，求出其中的最大值输出。

 Input
 在一行上输入三个整数，整数间用逗号分隔。

 Output
 输出三个数中的最大值。

 Sample
 Input
 5,7,9
 Output
 max=9
 */
#include<stdio.h>
int main ()
{
    int a,b,c,t,max;
    scanf("%d,%d,%d",&a,&b,&c);
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
    
    printf("max=%d\n",max);
    return 0;
    
}
