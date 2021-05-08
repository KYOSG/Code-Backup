/*
 Description
 输入N个整数顺序建立一个单链表，将该单链表拆分成两个子链表，第一个子链表存放了所有的偶数，第二个子链表存放了所有的奇数。两个子链表中数据的相对次序与原链表一致。
 Input
 第一行输入整数N;；
 第二行依次输入N个整数。
 Output
 第一行分别输出偶数链表与奇数链表的元素个数；
 第二行依次输出偶数子链表的所有数据；
 第三行依次输出奇数子链表的所有数据。
 Sample
 Input
 10
 1 3 22 8 15 999 9 44 6 1001
 Output
 4 6
 22 8 44 6
 1 3 15 999 9 1001
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
    int n;
    int count1=0;
    int count2=0;
    Node *head=new Node;
    Node *p=head;
    p->Next=nullptr;

    Node *res1=new Node;
    Node *res2=new Node;
    Node *p1=res1;
    Node *p2=res2;
    p1->Next=nullptr;
    p2->Next=nullptr;

    cin>>n;

    while(n--)
    {
        Node *t=new Node;
        cin>>t->data;
        t->Next=p->Next;
        p->Next=t;
        p=t;
    }

    p=head->Next;
    while(p)
    {
        if(p->data%2==0)
        {
            Node *t=new Node;
            count2++;
            t->data=p->data;
            p2->data=t->data;
            t->Next=p2->Next;
            p2->Next=t;
            p2=t;
        }
        else
        {
            Node *t = new Node;
            count1++;
            t->data=p->data;
            p1->data=t->data;
            t->Next=p1->Next;
            p1->Next=t;
            p1=t;
        }
        p=p->Next;
    }


    cout<<count2<<" "<<count1<<endl;

    p2=res2;
    while(p2->Next)
    {
        cout<<p2->data<<" ";
        p2=p2->Next;
    }
    cout<<endl;

    p1=res1;
    while(p1->Next)
    {
        cout<<p1->data<<" ";
        p1=p1->Next;
    }
    cout<<endl;

    return 0;
}
