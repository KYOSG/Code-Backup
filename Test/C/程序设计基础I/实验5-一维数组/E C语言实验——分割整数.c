/*
 Description

 从键盘输入一个长整数（不超过10位），从高位开始逐位分割并输出。
 Input

 正整数n，不含前导零。
 Output

 分割的整数序列，各整数之间用空格格开。
 注意，最后一个数字后面没有空格！
 Sample

 Input

 678123
 Output

 6 7 8 1 2 3
 */
#include<stdio.h>
int main()
{
    long long int num,sum=0,n,i=0;

    scanf("%lld",&num);

    n=num;

    while (n>0)
    {
        n=n/10;
        sum++;
    }

    int a[sum];

    for(i=0;i<sum;i++)
    {
        a[i]=num%10;
        num=num/10;
    }

    for(i=sum-1;i>=0;i--)
    {
        if (i==sum-1)
        {
            printf("%d",a[sum-1]);
        }
        else
        {
        printf(" %d",a[i]);
        }
    }

    printf("\n");
    
    return 0;
}
