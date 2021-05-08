/*
 Description
 输入N*N的矩阵，输出它的转置矩阵。
 Input
 第一行为整数N（1≤N≤100）。
 接着是一个N*N的矩阵。
 Output
 转置矩阵。
 Sample
 Input
 2
 1 2
 1 2
 Output
 1 1
 2 2
 */
#include<stdio.h>
int main()
{
    int n,j,i;

    int a[100][100];

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==0)
                printf("%d",a[j][i]);
            else
                printf(" %d",a[j][i]);
        }
        printf("\n");
    }



    return 0;
}
