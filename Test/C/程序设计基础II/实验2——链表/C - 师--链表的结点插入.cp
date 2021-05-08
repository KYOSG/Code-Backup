/*
 Description
 给出一个只有头指针的链表和 n 次操作，每次操作为在链表的第 m 个元素后面插入一个新元素x。若m 大于链表的元素总数则将x放在链表的最后。

 Input
 多组输入。每组数据首先输入一个整数n(n∈[1,100])，代表有n次操作。

 接下来的n行，每行有两个整数Mi(Mi∈[0,10000])，Xi。

 Output
 对于每组数据。从前到后输出链表的所有元素,两个元素之间用空格隔开。

 Sample
 Input
 4
 1 1
 1 2
 0 3
 100 4
 Output
 3 1 2 4
 Hint
 样例中第一次操作1 1，由于此时链表中没有元素，1>0,所以此时将第一个数据插入到链表的最后，也就是头指针的后面。
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
    int mi;
    int flag;

    while(cin>>n)
    {
        Node *head=new Node;
        Node *p=head;
        p->Next=nullptr;

        flag=0;

        while(n--)
        {
            Node *t = new Node;
            cin>>mi>>t->data;

            if(mi>flag)
                mi=flag;

            p=head;
            while(mi--)
                p=p->Next;

            t->Next=p->Next;
            p->Next=t;
            flag++;
        }

        p=head->Next;
        while(p!= nullptr)
        {
            if(p==head->Next)
            {
                cout<<p->data;
            }
            else
                cout<<" "<<p->data;
            p=p->Next;
        }

        if(p == NULL)
        {
            cout<<endl;
        }
    }

    return 0;
}
