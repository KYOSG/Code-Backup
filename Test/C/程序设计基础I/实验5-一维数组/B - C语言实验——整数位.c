/*
 Description
 输入一个不多于5位的正整数，要求：
 （1）求出它是几位数；
 （2）分别输出每一位数字；
 （3）按逆序输出各位数字。

 Input
 输入一个不多于5位的正整数。

 Output
 输出数据有3行，第一行为正整数位数，第二行为各位数字，第三行为逆序的各位数字。

 Sample
 Input
 123
 Output
 3
 1 2 3
 3 2 1
 */
#include<stdio.h>
int main()
{
    long int a,n;
    int i=0,count=0;

    scanf("%ld",&a);

    n=a;

    while (n>0)
    {
        n=n/10;
        count++;
    }

    int num[count];

    n=a;

    while (n>0)
    {
        num[i]=n%10;
        i++;
        n=n/10;
    }

    printf("%d\n",count);

    for(i=count-1;i>=0;i--)
    {
        if (i==count-1)
            printf("%d",num[count-1]);
        else
            printf(" %d",num[i]);
    }

    printf("\n");

    for(i=0;i<count;i++)
    {
        if (i==0)
            printf("%d",num[0]);
        else
            printf(" %d",num[i]);
    }

    printf("\n");
    
    return 0;
}
