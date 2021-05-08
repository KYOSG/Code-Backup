/*
 Description
 小z现在落在一个n*m的地图里,每个位置都有一个数字, 由于最近小z的方向感堪忧, 他只能从出发点(x,y)向一个确定的方向前进,不然他可能会迷路的. 现在他可以向8个方向前进: 上,下,左,右,左上,左下,右上,右下,走到边界就会传送回出发点. 小z的好朋友小y特别喜欢偶数, 就希望小z能带回尽可能大的偶数之和.现在小z请求你写个程序帮助他完成这个任务.

 Input
 首先两个整数n,m(1 <= n,m <= 1000) 代表地图的大小, 接下来n行,每行m个数字a[i][j],1 <= a[i][j] <= 10^9代表地图中的每个值.最后两个整数x,y (1 <= x <= n, 1 <= y <= m)代表小z现在所在的位置.

 Output
 一行,包括一个整数,代表小z最多能带回的最大偶数之和

 Sample
 Input
 3 4
 1 2 3 4
 1 2 3 4
 1 2 3 4
 2 2
 Output
 6
 Hint
 一个偶数只能被带走一次
 */
#include<stdio.h>
int main()
{
    long long int i,n,m,j,x,t=0,y,max=0;
    long long map[1000][1000],sum[8]={0};

    scanf("%lld %lld",&n,&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%lld",&map[i][j]);
        }
    }

    scanf("%lld %lld",&x,&y);
    x=x-1;
    y=y-1;

    if (map[y][x]%2==0)
    {
        t=map[y][x];
        map[y][x]=1;
    }
    for(i=y;i<n;i++)//向下
    {
        if (map[i][x]%2==0)
        {
            sum[0]+=map[i][x];
            map[i][x]=1;
        }
    }

    for(i=y;i>=0;i--)//向上
    {
        if (map[i][x]%2==0)
        {
            sum[1]+=map[i][x];
            map[i][x]=1;
        }
    }

    for(i=x;i>=0;i--)//向左
    {
        if (map[y][i]%2==0)
        {
            sum[2]+=map[y][i];
            map[y][i]=1;
        }
    }
    for(i=x;i<m;i++)//向右
    {
        if (map[y][i]%2==0)
        {
            sum[3]+=map[y][i];
            map[y][i]=1;
        }
    }

    for(i=y,j=x;i>=0&&j<m;i--,j++)//向右上
    {
        if (map[i][j]%2==0)
        {
            sum[4]+=map[i][j];
            map[i][j]=1;
        }
    }

    for(i=y,j=x;i>=0&&j>=0;i--,j--)//向左上
    {
        if (map[i][j]%2==0)
        {
            sum[5]+=map[i][j];
            map[i][j]=1;
        }
    }

    for(i=y,j=x;i<n&&j>=0;i++,j--)//向左下
    {
        if (map[i][j]%2==0)
        {
            sum[6]+=map[i][j];
            map[i][j]=1;
        }
    }
    for(i=y,j=x;i<n&&j<m;i++,j++)//向右下
    {
        if (map[i][x]%2==0)
        {
            sum[7]+=map[i][x];
            map[i][x]=1;
        }
    }

    for(i=0;i<8;i++)
    {
        if(sum[i]>max)
        {
            max=sum[i];
        }
    }

    if (t!=0)
    {
        max=max+t;
    }

    printf("%lld",max);
    return 0;
}
