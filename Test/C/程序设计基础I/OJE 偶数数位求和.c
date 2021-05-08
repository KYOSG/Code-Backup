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
#include<stdio.h>
int main()
{
    int n, temp, i, temp2, c=0;
    
    scanf("%d", &n);
    
    i = 0;
    while (n>=10)
    {
        temp=0;
        
        temp2=0;
        
        temp = n%10;
        
        temp2 = temp%2;
        
        if (temp2 == 0)
        {
            i = i+temp;
        }
        else
            c = c+1;
        
        n = n/10;

    }
    c = 0;
    c = n%2;
    if (c == 0)
    {
        i = i + n;
        printf("%d\n",i);
    }
    else
        printf("%d\n", i);
    
    return 0;
}
