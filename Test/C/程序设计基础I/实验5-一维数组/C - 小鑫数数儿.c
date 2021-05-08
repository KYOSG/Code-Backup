/*
 Description

 某天小鑫忽然得到了许多的数字，他很好学，老师给他布置了一个任务，求出这些数字中，小于他们平均数、等于他们平均数、大于他们平均数的数字的数量是多少。（对于出现的平均数，保证都是整数，不会出现浮点数）
 Input

  多组输入。
 对于每次的输入，第一行一个整数N(1 <= N <= 10)，代表数字的个数。

 接下来的一行，输入N个整数M(0 <= M <= 100)。
 Output

  输出包含三个数，第一个跟第二个数后面是空格，最后一个数后面是换行。
 第一个数是这些数字中小于他们平均数的数字的个数，第二个数为等于他们平均数的数字的个数，第三个数为大于他们平均数的数字的个数。
 Sample

 Input

 3
 1 2 3
 5
 2 4 4 5 5
 Output

 1 1 1
 1 2 2
 */
#include<stdio.h>
int main()
{
    int nmax,nmin,ave,n,i,sum,count;

    while (scanf("%d",&n)!=EOF)
    {
        nmax = 0;
        nmin = 0;
        sum=0;
        count=0;

        int a[n];

        for (i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
            sum = sum + a[i];
        }

        ave = sum / n;

        for (i = 0; i < n; i++)
        {
            if (a[i] > ave)
                nmax++;
            if (a[i]==ave)
                count++;
            if (a[i]<ave)
                nmin++;
        }
        printf("%d %d %d\n",nmin,count,nmax);
    }
    return 0;
}
