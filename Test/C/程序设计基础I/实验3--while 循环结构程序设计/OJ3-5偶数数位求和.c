/*
 
 Description

 给定一个整数，请求出这个整数所有数位中是偶数的数位的和。例如，对于12436546，那么答案就是 2 + 4 + 6 + 4 + 6 。
 Input

 输入一个数 n 。 (0 <= n <= 2147483647)
 Output

 输出 n 的所有偶数数位的和。
 Sample

 Input

 6768
 Output

 20
 
 */
#include <stdio.h>
int main ()
{
    int n, i, a, j;
    
    scanf("%d", &n);
    
    i = 0;
    while (n > 0)
    {
        a = n %10;
        n = n / 10;
        j = a %2;
        
        if (j == 0)
            i = i + a;
            
        else
            n = n;
        
    }
    printf("%d\n", i);
    
    return 0;
}
