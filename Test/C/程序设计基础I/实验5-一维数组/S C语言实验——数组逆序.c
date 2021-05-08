/*
 Description
 有n个整数，使其最后m个数变成最前面的m个数，其他各数顺序向后移m（m < n < 100)个位置。

 Input
 输入数据有2行，第一行的第一个数为n，后面是n个整数，第二行整数m。

 Output
 按先后顺序输出n个整数。

 Sample
 Input
 5 1 2 3 4 5
 2
 Output
 4 5 1 2 3
 */
#include<stdio.h>
int main()
{
    int n,m,t,i,t2,j;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&m);
    
    for(i = 0; i < m;i++)//一位一位前提，提一位相应后移一位
    {
        t = a[n-1];
        for(j = n - 1; j > 0; j--)
        {
            a[j] = a[j-1];
        }
        a[0] = t;
    }

    for (i=0; i<n; i++)
        {
            if (i==0)
            {
                printf("%d",a[0]);
            }
            else
                printf(" %d",a[i]);
        }
    printf("\n");

    return 0;
}
