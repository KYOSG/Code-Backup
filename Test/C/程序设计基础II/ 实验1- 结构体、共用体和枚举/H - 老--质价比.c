#include<stdio.h>
struct compare
{
    int qu;
    int pr;
};
int main()
{
    int n;
    int i,j;
    struct compare cmp[100];
    struct compare temp;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&cmp[i].qu);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&cmp[i].pr);
    }

    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(cmp[i].qu>cmp[i+1].qu)
            {
                temp=cmp[i];
                cmp[i]=cmp[i+1];
                cmp[i+1]=temp;
            }

            if(cmp[i].qu==cmp[i+1].qu)
            {
                if(cmp[i].pr<cmp[i+1].pr)
                {
                    temp=cmp[i];
                    cmp[i]=cmp[i+1];
                    cmp[i+1]=temp;
                }
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%d %d\n",cmp[i].qu,cmp[i].pr);
    }

    return 0;
}
