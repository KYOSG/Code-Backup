/*
 Description
 在长度为n（n<1000)的顺序表中可能存在着一些值相同的“多余”数据元素（类型为整型），编写一个程序将“多余”的数据元素从顺序表中删除，使该表由一个“非纯表”（值相同的元素在表中可能有多个）变成一个“纯表”（值相同的元素在表中只能有一个）。
 Input
 第一行输入表的长度n；
 第二行依次输入顺序表初始存放的n个元素值。
 Output
 第一行输出完成多余元素删除以后顺序表的元素个数；
 第二行依次输出完成删除后的顺序表元素。
 Sample
 Input
 12
 5 2 5 3 3 4 2 5 7 5 4 3
 Output
 5
 5 2 3 4 7
 Hint
 用尽可能少的时间和辅助存储空间。
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
    int n;
    int count=0;
    Node *head=new Node;
    Node *p=head;
    Node *res=new Node;

    p->Next=nullptr;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        Node *t=new Node;
        cin>>t->data;
        t->Next=p->Next;
        p->Next=t;
        p=t;
    }
    Node *p3=res;
    Node *p2=nullptr;
    p=head->Next;
    int flag=0;
    while(p)
    {
        flag=0;
        p2=res;
        while(p2)
        {
            if(p2->data==p->data)
            {
                flag=1;
                break;
            }
            p2=p2->Next;
        }


        if(flag==0)
        {
            Node *t=new Node;
            t->data=p->data;
            t->Next=p3->Next;
            p3->Next=t;
            p3=t;
            count++;
        }
        p=p->Next;
    }

    p=res->Next;
    cout<<count<<endl;
    while(p)
    {
        cout<<p->data<<" ";
        p=p->Next;
    }
    cout<<endl;
    return 0;
}
