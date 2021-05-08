/*
 Description

 求2个数中较大者。
 Input

 第一行为测试的数据组数N，接下来的N行分别是两个待比较的整数。
 Output

 输出N行，每一行的值为每组数中较大的整数。
 Sample

 Input

 2
 1 2
 15 10
 Output

 2
 15
 */
#include <stdio.h>
int main ()
{
    int n, a, b;
    
    for (scanf("%d", &n); 0<n; n--)
    {
        scanf("%d %d", &a, &b);
        if (a>b)
        {
            printf("%d\n", a);
        }
        else
        {
            printf("%d\n", b);
        }
    }
    
    return 0;
}
