/*
 
 Description

 从键盘上输入任意一个整数n，计算1到n的和。
 Input

 从键盘输入任意整数n。
 Output

 输出1到n的和。
 Sample

 Input

 3
 Output

 6
 
 */
#include <stdio.h>
int main ()
{
    int n, sum;
    
    scanf("%d", &n);
    
    for (sum = 0; n > 0; n--)
    {
        sum = sum + n;
    }
    printf("%d\n", sum);
    
    return 0;
}
