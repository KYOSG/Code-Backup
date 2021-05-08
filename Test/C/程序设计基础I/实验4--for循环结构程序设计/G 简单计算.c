/*
 Description

 接受从键盘输入的N个整数，输出其中的最大值、最小值和平均值（平均值为整除的商）。
  
 Input

 第一行一个正整数N（N<=100）；
 第二行有N个用空格隔开的整数Ti (1 <= i <= N, 0 <= Ti <= 10000000)
 Output

 三个有空格隔开的整数分别为最大值、最小值和平均值，其中平均值为整除的商。
 Sample

 Input

 5
 1 2 3 5 4
 Output

 5 1 3
 */
#include<stdio.h>
int main()
{
    int n=0;
    long long int max=0,min=10000000,sum=0,num=0,average;
    int i=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld",&num);
        if(num>max)
            max=num;
        if(min>num)
            min=num;
        sum=sum + num;
    }
    average=sum/n;
    printf("%lld %lld %lld",max,min,average);
    return 0;
    
}
