/*
 Description
 输入n个整数，输出由这些整数组成的n行矩阵。

 Input
 第一行输入一个正整数N（N<=20），表示后面要输入的整数个数。
 下面依次输入N个整数。

 Output
 以输入的整数为基础，输出有规律的n行数据。

 Sample
 Input
 5
 3 6 2 5 8
 Output
 3 6 2 5 8
 8 3 6 2 5
 5 8 3 6 2
 2 5 8 3 6
 6 2 5 8 3
 */
#include<stdio.h>
int main()
{
    int n,i,j,t;

    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            for (j = 0; j < n; j++)
            {
                if (j == 0)
                    printf("%d", a[j]);
                else
                    printf(" %d", a[j]);
            }
        }

        else
            {
            t = a[n - 1];

            for (j = n - 1; j > 0; j--)
            {
                a[j] = a[j - 1];
            }

            a[0] = t;


            for (j = 0; j < n; j++)
            {
                if(j==0)
                    printf("%d",a[j]);
                else
                    printf(" %d",a[j]);
            }
        }
            printf("\n");
    }



    return 0;
}
