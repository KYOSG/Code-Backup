/*
 Description

X晚上睡不着的时候不喜欢玩手机，也不喜欢打游戏，他喜欢数星星。
Input

 多组输入。

每组先输入一个整数N(N <= 10000)，接着输入两个点代表矩形的左下点B（x,y）和右上点T(x,y)，然后输入N个（X，Y）代表Ｎ颗星星。问有多少颗星星在窗子内部，在窗边上的不计。
Output

 输出一个整数，代表有多少颗星星在窗子内部。
Sample

Input

3
0 1
3 4
1 1
2 2
3 3
2
1 1
5 5
4 4
0 6
Output

1
1
*/
#include <stdio.h>
int main()
{
    int n,sum,i,x2,y2,x0,y0,x1,y1,temp;

    while (scanf("%d",&n)!=EOF)
    {
        scanf("%d %d",&x0,&y0);
        scanf("%d %d",&x1,&y1);

        if(x0>x1)
        {
            temp=x0;
            x0=x1;
            x1=temp;
        }
        if(y0>y1)
        {
            temp=y1;
            y0=y1;
            y1=temp;
        }

        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d %d",&x2,&y2);
            if ((x2<x1&&x2>x0)&&(y2<y1&&y2>y0))
            {
                sum++;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
