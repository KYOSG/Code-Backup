/*
 Description
 输入矩阵的行数，再依次输入矩阵的每行元素，判断该矩阵是否为对称矩阵，若矩阵对称输出“yes"，不对称输出”no“。

 Input
 输入有多组，每一组第一行输入一个正整数N（N<=20），表示矩阵的行数（若N=0，表示输入结束）。
 下面依次输入N行数据。

 Output
 若矩阵对称输出“yes"，不对称输出”no”。

 Sample
 Input
 3
 6 3 12
 3 18 8
 12 8 7
 3
 6 9 12
 3 5 8
 12 6 3
 0
 Output
 yes
 no
 */
#include<stdio.h>
int main()
{
    int n,i,j,flag=0;

    int a[20][20];

    while (scanf("%d",&n)!=EOF&&n)
    {
        flag=0;
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
                if(a[j][i]==a[i][j])
                    continue;
                else
                {
                    flag++;
                }
            }
        }
        if (flag==0)
            printf("yes\n");
        else
            printf("no\n");

    }


    return 0;
}
