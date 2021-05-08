/*
Description
输入多个整数，以-1作为结束标志，顺序建立一个带头结点的单链表，之后对该单链表的数据进行逆置，并输出逆置后的单链表数据。
Input
输入多个整数，以-1作为结束标志。
Output
输出逆置后的单链表数据。
Sample
Input
12 56 4 6 55 15 33 62 -1
Output
62 33 15 55 6 4 56 12
Hint
不得使用数组。
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
    Node *head=new Node;
    head->Next=nullptr;

    int temp;
    while(cin>>temp&&temp!=-1)
    {
        Node *t=new Node;
        t->data=temp;
        t->Next=head->Next;
        head->Next=t;
    }

    Node *p=head->Next;

    while(p)
    {
        cout<<p->data<<" ";
        p=p->Next;
    }
    cout<<endl;


    return 0;
}
