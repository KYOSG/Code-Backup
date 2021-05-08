/*
 
 L - 高中数学？
 Description
 高中数学大家都学过数列，其中一个重要的概念就是数列的通项，可以代表数列中每一项的一个表达式。
  今天我们的问题就跟通项有关系，说，给你一个数列的通项和数列中的前几项，希望你能求出它的第n项。
  通项表达式如下：
  F(1) = 0;
  F(2) = 1;
  F(n) = 4*F(n-1)-5*F(n-2);
 Input
 输入数据第一行是一个正整数T，T<100。接下来T行，每行一个整数n, 2<n<50。
 Output
 输出有T行，对于输入中每行中的n按照通项计算出F(n)。
 Sample
 Input
 4
 3
 4
 5
 6
 Output
 4
 11
 24
 41
 */
#include<stdio.h>
int f(int n);
int main()
{
    int n,T;

    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);

        printf("%d\n",f(n));
    }


    return 0;
}

int f(int n)
{
    int res;

    if (n==1)
        res=0;
    else if(n==2)
        res=1;
    else if(n>=3)
        res=4*f(n-1)-5*f(n-2);

    return res;
}
