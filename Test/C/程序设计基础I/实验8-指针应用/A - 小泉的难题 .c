/*
 Description
 机械实验班有个同学叫小泉，有一天数学老师给小泉布置了一道个人作业，给小泉M（M<=100）组数据，每组数据有N个正整数（N<=100）让他把每组的N个数按升序排成一行，但由于数的数目比较多，人工做很费时，于是小泉就想到了喜欢编程序的你，请你帮他解决这个问题，可不要让他失望噢。
 Input
 输入包括M+1行，第一行是两个正整数M、N；M表示总共多少组数据，下面M行每行包含N个正整数。（输入数据之间会用空格隔开）
 Output
 输出包括M行，每行分别对应输入中M组数据的升序序列，数与数之间用一个空格隔开。
 Sample
 Input
 2 3
 1 3 2
 4 2 6
 Output
 1 2 3
 2 4 6
 */
#include<stdio.h>
void f(int *p,int n);
int main()
{
    int n,m,i=0,j=0;
    int a[100],b[100][100];
    int *p;

    scanf("%d %d",&m,&n);
    while(j<m)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        p=a;
        f(p,n);
        for(i=0;i<n;i++)
        {
            b[j][i]=a[i];
        }
        j++;
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if (j==0)
            {
                printf("%d",b[i][j]);
            }
            else
            {
                printf(" %d",b[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}
void f(int *p,int n)
{
    int t,i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
