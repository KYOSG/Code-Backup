/*
 Description
 请定一个无向图，顶点编号从0到n-1，用深度优先搜索(DFS)，遍历并输出。遍历时，先遍历节点编号小的。

 Input
 输入第一行为整数n（0 < n < 100），表示数据的组数。 对于每组数据，第一行是两个整数k,m（0 ＜ k ＜ 100，0 ＜ m ＜ k*k），表示有m条边，k个顶点。 下面的m行，每行是空格隔开的两个整数u，v，表示一条连接u，v顶点的无向边。

 Output
 输出有n行，对应n组输出，每行为用空格隔开的k个整数，对应一组数据，表示DFS的遍历结果。

 Sample
 Input
 1
 4 4
 0 1
 0 2
 0 3
 2 3
 Output
 0 1 2 3
 */
#include<iostream>
#include<vector>
#include<cstring>

using namespace std;

vector<int> a[500005];

int main()
{
    int n,m;
    int u,v;
    int q;
    int len,flag;
    while(scanf("%d %d",&n,&m)!=EOF)
    {
        memset(a,0,sizeof (a));
        while(m--)
        {
            scanf("%d %d",&u,&v);
            a[u].push_back(v);
        }

        scanf("%d",&q);

        while(q--)
        {
            flag=0;

            scanf("%d %d",&u,&v);
            len=a[u].size();
            for(int i=0;i<len;i++)
            {
                if(a[u][i]==v)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
    return 0;
}
