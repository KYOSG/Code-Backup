#include<stdio.h>
struct n
{
    int name;
    int count;
};
int main()
{
    int n,m;
    struct n a[1000];
    int i,t,j;

    scanf("%d %d",&m,&n);

    for(i=1;i<=m;i++)
    {
        a[i].name = i;
        a[i].count = 0;
    }

    for(i=0;i<n;i++)
    {
        scanf("%d",&t);
        a[t].count++;
    }
    t=0;
    for(i=1;i<=m;i++)
    {
        if(a[i].count>t)
        {
            t=a[i].count;
            j=a[i].name;
        }
    }

    printf("%d\n%d\n",j,t);
    return 0;
}
