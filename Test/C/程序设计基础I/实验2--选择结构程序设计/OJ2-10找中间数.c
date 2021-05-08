/*
 Description
 输入三个整数，找出其中的中间数。（这里的中间数指的是大小，不是位置。）

 Input
 输入3个整数。

 Output
 输出中间数。

 Sample
 Input
 1 2 3
 Output
 2
 */
#include <stdio.h>
int main ()
{
    int a, b, c, t;
    
    scanf("%d %d %d", &a, &b, &c);
    
   if ( a < b )
   {
       //交换ab的数值
       t = a;
       a = b;
       b = t;
   }
    if ( b < c )
    {
        //交换bc的数值
        t = b;
        b = c;
        c = t;
    }
    if (b > a)
    {
        //交换ac的数值
        t = b;
        b = a;
        a = t;
    }
    
    printf ("%d\n", b);
    
    
    return 0;
}
