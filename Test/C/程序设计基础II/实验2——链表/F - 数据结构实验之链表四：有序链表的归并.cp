/*
 Description
 分别输入两个有序的整数序列（分别包含M和N个数据），建立两个有序的单链表，将这两个有序单链表合并成为一个大的有序单链表，并依次输出合并后的单链表数据。
 Input
 第一行输入M与N的值；
 第二行依次输入M个有序的整数；
 第三行依次输入N个有序的整数。
 Output
 输出合并后的单链表所包含的M+N个有序的整数。
 Sample
 Input
 6 5
 1 23 26 45 66 99
 14 21 28 50 100
 Output
 1 14 21 23 26 28 45 50 66 99 100
 Hint
 不得使用数组！
 */
#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *Next;
};

int main()
{
    int n,m;

    Node *head = new Node;
    Node *p=head;
    Node *head2 = new Node;
    p->Next=nullptr;

    cin>>m>>n;

    while(m--)
    {
        Node *t=new Node;
        scanf("%d",&t->data);
        t->Next=p->Next;
        p->Next=t;
        p=t;
    }

    p=head2;
    p->Next=nullptr;

    while(n--)
    {
        Node *t=new Node;
        scanf("%d",&t->data);
        t->Next=p->Next;
        p->Next=t;
        p=t;
    }

    p=head->Next;
    Node *p2=head2->Next;
    Node *t=head;
    while(p&&p2)
    {
        if(p->data>p2->data)
        {
            t->Next=p2;
            t=p2;
            p2=p2->Next;
        }
        else
        {
            t->Next=p;
            t=p;
            p=p->Next;
        }
    }
    if(p)
    {
        t->Next=p;
    }
    else
    {
        t->Next=p2;
    }

    p=head->Next;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->Next;
    }
    cout<<endl;
    
    return 0;
}
