/*
 Description

       素数又称质数。指一个大于1的自然数，除了1和此整数自身外，不能被其他自然数整除的数。我们定义：如果一个素数是完美的素数，当且仅当它的每一位数字之和也是一个素数。现在给你一个正整数，你需要写个程序判断一下这个数按照上面的定义是不是一个完美的素数。
 Input

 输入包含多组测试数据。
 每组测试数据只包含一个正整数 n (1 < n <= 10^6)。
 Output

 对于每组测试数据，如果 n 是完美的素数，输出“YES”，否则输出“NO”(输出均不含引号)。
 Sample

 Input

 11
 13
 Output

 YES
 NO
 */
#include<stdio.h>
int main()
{
    long long int n,temp = 0,sum=0,i;
    
    while (scanf("%lld",&n)!=EOF)
    {
        if(n==1||n==2)
        {
            printf("YES\n");
            continue;
        }
        temp=0;
        sum=0;
        if(n>10)
        {
            temp=n;
            while (temp>0)
            {
                sum=sum+temp%10;
                temp=temp/10;
            }
        }
        else
            sum=n;
        
        for (i=2; i<n; i++)
        {
            if(n%i==0)
                temp++;
            else
                continue;
        }
    
        for (i=2; i<sum; i++)
        {
            if(sum%i==0)
                temp++;
            else
                continue;
        }
        
        
        if (temp==0)
        {
            printf("YES\n");
        }
        
        else
        {
            printf("NO\n");
        }
        
        
        
    }
    
    return 0;
}
