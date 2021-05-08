/*
 Description
 众所周知，C语言的学习是我们程序设计基础的重点和主要内容。
 小金知道他喜欢的妹子最喜欢的水果是苹果，但是小金是种玉米的哪！所以他为了讨好妹子的欢心，他会从收获的n个玉米中挑选出m个最大的玉米去抠脚大汉那里换苹果，问题是，他这m个玉米的价值有多大？

 Input
 多组输入。
 每行开始输入两个整数分别为n,m。代表含义如题目所述。
 接下来一行有n个整数，代表每个玉米的价值。
 1 < = m < n < = 1000

 Output
 输出小金m个最大玉米的总价值。
 输出占一行，保证数据合法。

 Sample
 Input
 10 4
 1 2 3 4 5 6 7 8 9 10
 5 3
 1 2 3 4 5
 */
#include<stdio.h>
int main()
{
    int n,i,j,t,m,sum;

    while (scanf("%d %d",&n,&m)!=EOF)
    {
        int a[n];
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n-1;i++)
        {
            for(j=0;j<n-i-1;j++)
            {
                if(a[j]<a[j+1])
                {
                    t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }

        for(i=0;i<m;i++)
        {
            sum=sum+a[i];
        }
        printf("%d\n",sum);
    }

    return 0;
}
