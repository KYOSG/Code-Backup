#include<stdio.h>
struct student
{
    char name[20];
    int score;
};
int main()
{
    struct student st[100];
    struct student t;
    int n,i,j;

    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%s %d",st[i].name,&st[i].score);
    }

    for(j=0;j<n-1;j++)
    {
        for(i=0;i<n-j-1;i++)
        {
            if(st[i].score<st[i+1].score)
            {
                t=st[i];
                st[i]=st[i+1];
                st[i+1]=t;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        printf("%s %d\n",st[i].name,st[i].score);
    }
    return 0;
}
