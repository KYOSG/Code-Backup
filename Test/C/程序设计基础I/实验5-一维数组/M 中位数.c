/*
 Description
 中位数是指在一组数据中，按数值大小排序后处于中间位置的数。例如：1, 5, 3 排序后为 1, 3, 5，则其中位数为 3。特别地，当数的个数 N 为偶数时，中位数取位置居中的两个数 (N/2 和 N/2+1) 的平均值，例如：1, 2, 3, 4，中位数为 (2+3)/2 = 2.5。

 给定一组数，你能求出中位数吗？

 Input
 输入数据有多组（数据组数不超过 100），到 EOF 结束。

 对于每组数据：

 第 1 行输入一个整数 n (3 <= n <= 100)，表示数的个数。
 第 2 行输入 n 个用空格隔开的整数 Ai (0 <= Ai <= 1000)，依次表示每一个数，保证互不重复。
 Output
 对于每组数据，在一行中输出一个实数（保留 1 位小数），表示这组数据的中位数。

 Sample
 Input
 3
 1 5 3
 4
 1 2 3 4
 Output
 3.0
 2.5
 */
#include <stdio.h>
int main()
{
    int i,j,t,n;

    double m;

    while (scanf("%d",&n)!=EOF)
    {
        int a[n];

        for (i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }

        for (i=0; i<n-1; i++)
        {
            for(j = 0; j < n - 1 - i; j++)
            {
                if(a[j] > a[j+1])
                {
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                }
            }

        }
        
        if (n%2==0)
        {
            m=(double)(a[(n/2)-1]+a[(n/2)])/2;
            printf("%.1lf",m);
        }
        else
        {
            m=a[(n+1)/2-1];
            printf("%.1lf",m);
        }
        printf("\n");

    }
    return 0;
}
