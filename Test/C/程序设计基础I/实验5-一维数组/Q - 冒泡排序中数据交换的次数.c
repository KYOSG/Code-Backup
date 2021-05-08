/*
 Description

 听说过冒泡排序么？一种很暴力的排序方法。今天我们不希望你用它来排序，而是希望你能算出从小到大冒泡排序的过程中一共进行了多少次数据交换。
 Input

 输入数据的第一行为一个正整数 T ，表示有 T 组测试数据。
 接下来T行，每行第一个整数N, 然后有N个整数，无序。0<N <= 100
 Output

 输出共 T 行。
 每行一个整数，代表本行数据从小到大冒泡排序所进行的交换次数。
 Sample

 Input

 3
 5 1 2 3 4 5
 4 5 3 7 1
 2 2 1
 Output

 0
 4
 1
 */
#include<stdio.h>
int main()
{
    int n,i,j,t,count,T;

        scanf("%d", &T);
        while (T>0)
    {
            scanf("%d",&n);

            int a[n];

            for (i = 0; i < n; i++)
            {
                scanf("%d", &a[i]);
            }
    count=0;
            for (i = 0; i < n - 1; i++)
            {
                for (j = 0; j < n - 1 - i; j++)
                {
                    if (a[j] > a[j + 1])
                    {
                        t = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = t;
                        count++;
                    }
                }
            }

            printf("%d\n",count);
            T--;
            }

    return 0;
}
