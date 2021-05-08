/*
 
 Description

 从键盘输入任意一个大于等于0的整数n，然后计算n的阶乘，并把它输出。

 提示： 0！是 1 。
 Input

 输入任意一个大于等于0的整数n。
 Output

 输出n！
 Sample

 Input

 3
 Output

 6
 
 */
#include <stdio.h>
int main ()
{
    int n, count;
    
    scanf("%d", &n);
    
    if (n != 0 && n > 0)
    {
        for (count = 1; n > 0; n--)
        {
            count = count * n;
        }
        printf("%d\n", count);
    }
    else if (0 == n)
    {
        printf("1\n");
    }
    else
        return 0;
    return 0;
}
