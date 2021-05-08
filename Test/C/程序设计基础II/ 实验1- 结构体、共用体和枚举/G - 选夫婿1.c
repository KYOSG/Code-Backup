#include<stdio.h>
struct BY
{
    char name[20];
    int h;
    int w;
    int flag;
};
int main()
{
    struct BY inf[1005];
    int a,b,c,d;
    int n,i,j;
    struct BY temp;
    int f=0;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s %d %d",inf[i].name,&inf[i].h,&inf[i].w);
        inf[i].flag=1;
    }
    scanf("%d %d %d %d",&a, &b, &c, &d);

    for(i=0;i<n;i++)
    {
        if((inf[i].w<c||inf[i].w>d)||(inf[i].h<a||inf[i].h>b))
        {
            inf[i].flag=0;
        }
    }

    for(i=0;i<n-1;i++)//排序
    {
        for(j=0;j<n-1-i;j++)
        {
            if(inf[j].h>inf[j+1].h)
            {
                temp=inf[j];
                inf[j]=inf[j+1];
                inf[j+1]=temp;
            }

            if(inf[j].h==inf[j+1].h)
            {
                if(inf[j].w>inf[j+1].w)
                {
                    temp=inf[j];
                    inf[j]=inf[j+1];
                    inf[j+1]=temp;
                }
            }
        }

    }

    for(i=0;i<n;i++)
    {
        if(inf[i].flag==1)
        {
            printf("%s %d %d\n",inf[i].name,inf[i].h,inf[i].w);
            f=1;
        }
    }
    if(f==0)
        printf("No\n");

    return 0;
}
