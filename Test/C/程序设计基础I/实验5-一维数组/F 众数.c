/*
 Description

  

 给定一个由 n 个整数组成的序列A1，A2，……， An 和两个整数L，R，你的任务是写一个程序来计算序列号在[L，R](这是一个闭区间) 这段位置区间内所有数的总和。

  
 Input

  

 输入只有一组测试数据：

 测试数据的第一行为一个整数 n （1< n < 10000）；

 第二行为 n 个 int 类型的整数；

 第三行为两个整数 L，R（0 < L < R <= n）。
 Output

  

 输出序列号在区间[L，R]内所有数的和，数据保证和在 int 类型范围内。
 Sample

 Input

 5
 3 5 6 2 9
 2 4
 Output

 13
 */
/*TLE
 #include<stdio.h>
int main()
{
    int n,i,i2,count=0,judge=50;
    while ((scanf("%d",&n)!=EOF)||(judge!=0))
    {

        int a[n], c[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for (i = 0; i < n; i++)
        {
            for (i2 = 0; i2 < n; i2++)
            {
                if (a[i] == a[i2])
                {
                    count++;
                }
            }
            c[i] = count;
            count = 0;
        }

        i2 = 0;

        for (i = 1; i < n; i++)
        {
            if (c[i - 1] > c[i])
            {
                i2 = i-1;
            }
            else
                {
                i2 = i;
                }
        }
            printf("%d\n", a[i2]);
        judge--;

    }
    return 0;
}
*/
#include <stdio.h>
int main()
{
    int a,n;
    int i,k;
    while(~scanf("%d",&n))
    {
        int b[1001]={0},max=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a);
            b[a]++;
        /*统计“0”到“1000”对应的数出现的次数例如：若输入54，便在“b[54]”中加“1”，
        最后如果b[54]=3，即为54输入了三次*/
        }
        for(i=0;i<=1000;i++)    //寻找最大次数；
        {
            if(b[i]>max)
            {
             max = b[i];
             k = i;           //标记其下标；
            }
        }
        printf("%d\n",k);
    }
    return 0;
}


