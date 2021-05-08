/*
 Description

 矩阵是非常美妙的东西，可以用来解方程，以及解决一些图论的问题等，应用很广泛。即使没有学过线性代数，大家也一定接触过矩阵，在编程中可以理解为二维的表。



 矩阵有很多操作就像舞蹈一样，如行列的置换，矩阵的转置等。今天我们只看矩阵的旋转，希望得到当前矩阵顺时针旋转90度以后得到的矩阵。
 Input

 输入数据的第一行是一个正整数T，代表有T组测试样例。接下来T组数据，每组数据第一行是两个整数M,N (0  <  M , N  <  100),分别代表矩阵的行数和列数。然后是矩阵本身，共M行，每行N个数据用空格隔开。
 Output

  对于每组输入的矩阵，第一行输出Case #k:（k为该组数据的序号,具体格式见样例），然后输出其旋转后的矩阵。
 Sample

 Input

 2
 4 4
 1 2 3 4
 5 6 7 8
 6 6 6 6
 8 8 8 8
 2 3
 1 2 3
 4 5 6
 Output

 Case #1:
 8 6 5 1
 8 6 6 2
 8 6 7 3
 8 6 8 4
 Case #2:
 4 1
 5 2
 6 3
 */
#include<stdio.h>
int main()
{
    int j,i,T,m,n,flag=1;

    int a[101][101];

    scanf("%d",&T);
    while(flag<=T)
    {
        scanf("%d %d",&m,&n);
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf("Case #%d:\n",flag);

        for(i=0;i<n;i++)
        {
            for(j=m-1;j>=0;j--)
            {
                if(j==m-1)
                    printf("%d",a[j][i]);
                else
                    printf(" %d",a[j][i]);
            }
            printf("\n");
        }
    flag++;
    }

    return 0;
}
