/*
 Description

 对于一个数组，次大的数指数组中第二大的数，相似地，次小的数指数组中第二小的数。

 给定一个含有 n 个数的数组（数组中的数互不相同），求其中次大的数和次小的数。
 Input

 首先输入一个整数 T (1 <= T <= 200)，表示数据组数。

 对于每组数据：
 第 1 行输入一个整数 n (2 <= n <= 1000)，表示数组中元素的数量。
 第 2 行输入 n 个用空格隔开的整数 Ai (-10000 <= Ai <= 10000)，表示数组中每一个元素的值。
 Output

 对于每组数据，输出一行，包含 2 个整数 a, b，分别表示次大和次小的数。
 Sample

 Input

 1
 5
 3 1 2 4 5
 Output

 4 2
 */
#include<stdio.h>
int main()
{
    int n,i,j,t,T;

    scanf("%d",&T);

    while(T>0)
    {
        scanf("%d", &n);

        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (a[j] < a[j + 1])
                {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;
                }
            }
        }

        printf("%d %d",a[1],a[n-2]);
        printf("\n");
        T--;
    }


    return 0;
}
