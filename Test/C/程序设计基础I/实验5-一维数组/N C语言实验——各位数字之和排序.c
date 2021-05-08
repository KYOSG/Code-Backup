/*
 Description
 给定n个正整数，根据各位数字之和从小到大进行排序。

 Input
 输入数据有多组，每组数据占一行，每行的第一个数正整数n，表示整数个数，后面接n个正整数。当n为0时，不作任何处理，输入结束。n<=10

 Output
 输出每组排序的结果。

 Sample
 Input
 3 230 59 110
 5 199 220 108 235 120
 0
 Output
 110 230 59
 120 220 108 235 199
 */
#include <stdio.h>
int main() {
    int i, j, t, n, sum,temp;

    double m;

    while (scanf("%d", &n)!=EOF&&n)
    {

        int a[n], num[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &num[i]);
        }

        for (i = 0; i < n; i++)
        {
            sum = 0;
            temp = num[i];
            while (temp > 0)
            {
                sum = sum + temp % 10;

                temp = temp / 10;
            }
            a[i] = sum;
        }

        for (i = 0; i < n - 1; i++)
        {
            for (j = 0; j < n - 1 - i; j++)
            {
                if (a[j] > a[j + 1])
                {
                    t = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = t;

                    t = num[j];
                    num[j] = num[j + 1];
                    num[j + 1] = t;
                }
            }

        }

        for (i = 0; i < n; i++)
        {
            if (i == 0)
                printf("%d", num[0]);
            else
                printf(" %d", num[i]);
        }

        printf("\n");

    }
    return 0;
}
