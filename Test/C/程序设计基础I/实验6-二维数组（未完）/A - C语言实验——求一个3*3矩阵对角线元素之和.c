/*
 Description
 给定一个3*3的矩阵，请你求出对角线元素之和。

 Input
 按照行优先顺序输入一个3*3矩阵，每个矩阵元素均为整数。

 Output
 从左下角到右上角这条对角线上的元素之和

 Sample
 Input
 1 2 3
 3 4 5
 6 0 1
 Output
 13
 */
#include<stdio.h>
int main()
{
    int i,j,sum=0;
    int a[3][3];

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0,j=2;i<3;i++,j--)
    {
        sum=sum+a[i][j];
    }

    printf("%d",sum);

    return 0;
}
