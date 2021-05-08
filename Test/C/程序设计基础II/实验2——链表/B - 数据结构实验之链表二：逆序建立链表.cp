/*
 Description
 输入整数个数N，再输入N个整数，按照这些整数输入的相反顺序建立单链表，并依次遍历输出单链表的数据。
 Input
 第一行输入整数N;；
 第二行依次输入N个整数，逆序建立单链表。
 Output
 依次输出单链表所存放的数据。
 Sample
 Input
 10
 11 3 5 27 9 12 43 16 84 22
 Output
 22 84 16 43 12 9 27 5 3 11
 Hint
 不能使用数组！

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
    Node *head = new Node;
    Node *p=nullptr;
    head->Next=nullptr;

    int n;

    cin>>n;

    while(n--)
    {
        Node *t = new Node;

        scanf("%d",&t->data);
        head->Next=t;
        t->Next=p;
        p=t;
    }

    p=head->Next;
    while(p != nullptr)
    {
        cout<<p->data<<" ";
        p=p->Next;
    }

    return 0;
}
