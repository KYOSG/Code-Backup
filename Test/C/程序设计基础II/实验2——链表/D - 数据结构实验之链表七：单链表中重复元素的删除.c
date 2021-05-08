#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node
{
    int Data;
    struct Node *Next;
};

int main()
{
    int a[20]={0};
    memset(a,0,sizeof a);
    int n;
    struct Node *head=(struct Node *)malloc(sizeof (struct Node));
    struct Node *p=head;
    p->Next=NULL;

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        struct Node *t=(struct Node *)malloc(sizeof (struct Node));
        scanf("%d",&t->Data);
        t->Next=head->Next;
        head->Next=t;
    }

    printf("%d\n",n);
    p=head->Next;
    while(p)
    {
        if(!p->Next)
         printf("%d\n",p->Data);
        else
            printf("%d ",p->Data);
        p=p->Next;
    }


    int count=0,temp;
    p=head;
    while(p->Next)
    {
        int flag=1;
        for(int i=0;i<count;i++)
        {
            if(p->Next->Data==a[i])
            {
                struct Node *t=p->Next;
                if(!p->Next->Next)
                {
                    p->Next=NULL;
                    flag=0;
                    break;
                }
                else
                    p->Next=p->Next->Next;
                free(t);
                flag=0;
                break;
            }
        }
        if (flag)
        {
            a[count++]=p->Next->Data;
            p=p->Next;
        }

    }

    printf("%d\n",count);
    p=head->Next;
    while(p)
    {
        if(!p->Next)
            printf("%d\n",p->Data);
        else
            printf("%d ",p->Data);
        p=p->Next;
    }



    return 0;
}
