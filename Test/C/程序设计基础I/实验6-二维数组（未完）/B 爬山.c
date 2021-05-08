/*
 Description
 LeiQ最近参加了一个登山俱乐部，部长给他了一个n*m地图,地图上的每一个格子的值表示一个山的海拔高度，LeiQ现在在(x,y)表示在地图上的位置,他想要登上地图上最高的山，所以他想知道他爬上最高的山的山顶还需向上爬多少米。

 例如:
  

 x\y

 1

 2

 3

 1

 100

 130

 150

 2

 200

 300

 100

 3

 100

 150

 50

  

  

  

  
  





 现在LeiQ在(2,1),则他的位置海拔高度为200米，最高的为300米，所以还需爬100米

 Input
 多组输入
 每组的第一行是两个整数n,m（1<=n,m<=100），表示地图的大小

 接下来n行，每行m个整数，表示山的海拔高度(0<=Hij<=1000)

 最后一行两个整数x,y表示LeiQ的位置

 Output
 输出他还需要向上爬多少米。

  

 Sample
 Input
 3 3
 100 130 150
 200 300 100
 100 150 50
 2 1
 Output
 100
 */
#include<stdio.h>
int main()
{
    int n,m,i,j,x,y,flag=0,c;

    while (scanf("%d %d",&n,&m)!=EOF)
    {
        flag=0;
        int a[n][m];

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        scanf("%d %d",&x,&y);

        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(flag<=a[i][j])
                {
                    flag=a[i][j];
                }
            }
        }

        c=flag-a[x-1][y-1];

        printf("%d\n",c);

    }
    return 0;
}
