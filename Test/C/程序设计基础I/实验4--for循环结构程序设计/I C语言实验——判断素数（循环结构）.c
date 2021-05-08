/*
 Description

 从键盘上输入任意一个正整数，然后判断该数是否为素数。
 如果是素数则输出"This is a prime."
 否则输出“This is not a prime.”
 Input

 输入任意一个正整数n(1 <= n <= 1000000)。
 Output

 判断n是否为素数，并输出判断结果：
 如果n是素数则输出"This is a prime."
 否则输出“This is not a prime.”

 特别提醒：请注意对1的判定，1不是素数。
 Sample

 Input

 3
 Output

 This is a prime.
 */
#include <stdio.h>
int main()
{
    int a,i,b,c=0;
    scanf("%d",&a);
    if (1==a)
    {
        printf("This is not a prime.\n");
    }
    else
    {
        for (i=2; i<a; i++)
        {
            b= a % i;
            if (b==0)
            {
                c++;
            }
            else
            {
                c=c;
            }
        }
        if (0==c)
        {
            printf("This is a prime.\n");
        }
        else
        {
            printf("This is not a prime.\n");
        }
    }
    
    return 0;
}

