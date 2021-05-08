/*
 Description

 飞飞特别喜欢平方数，可是他数学并不好，你能帮他计算 n 与 m 之间所有平方数之和吗？
 提示：若一个整数的开方还是整数，它就是平方数。例如：4、9、16、25是平方数。n 和 m 均可能为 0 至 100000000 内的任意整数，n、m不一定有序。
 Input

  第一行 T 代表数据的组数。

 接下来有 T 行，每行两个整数n,m (0 <= n, m <= 100000000)
 Output

  输出一个整数，代表所求区间内平方数之和。
 Sample

 Input

 3
 1 4
 10 3
 17 20
 Output

 5
 13
 0
 */
#include<stdio.h>
#include<math.h>
int main()
{
    int T,i,n,m,s,k,t;
    scanf("%d",&T);
    while(T--)
    {
        s=0;
        scanf("%d %d",&n,&m);
        if(m<n)
        {
            t=m;
            m=n;
            n=t;
        }
        for(i=n; i<=m; i++)
        {
            for(k=1; k<=sqrt(i); k++)
            {
                if(k*k==i)s=s+i;
            }
        }
        printf("%d\n",s);
    }
    return 0;
}
