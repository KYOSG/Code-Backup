/*
 
 Description

 数列求和是一类常见的问题，本题有一定的代表性：
 求s=a+aa+aaa+aaaa+……+aa…aa(n位）
 其中，a的值由键盘输入，位数n也由键盘输入。
 Input

 第一行输入a的值；
 第二行输入位数n。
 Output

 输出对n个数完成求和运算后的结果。
 比如a=3，n=6时，s=3+33+333+3333+33333+333333
 Sample

 Input

 3
 6
 Output

 370368
 */
#include<stdio.h>
int main ()
{
    int a, n, c;
    int s = 0, i = 0;
    scanf ("%d", &a);
    scanf("%d", &n);
    
    for (c=a; i<n; ++i)
    {
        s = s + c;
        c = c * 10 + a;
    }
    
    printf("%d\n",s);
    
    return 0;
}
