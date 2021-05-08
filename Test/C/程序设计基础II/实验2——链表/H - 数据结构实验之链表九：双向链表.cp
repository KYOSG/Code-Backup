/*
 Description
 学会了单向链表，我们又多了一种解决问题的能力，单链表利用一个指针就能在内存中找到下一个位置，这是一个不会轻易断裂的链。但单链表有一个弱点——不能回指。比如在链表中有两个节点A,B，他们的关系是B是A的后继，A指向了B，便能轻易经A找到B,但从B却不能找到A。一个简单的想法便能轻易解决这个问题——建立双向链表。在双向链表中，A有一个指针指向了节点B，同时，B又有一个指向A的指针。这样不仅能从链表头节点的位置遍历整个链表所有节点，也能从链表尾节点开始遍历所有节点。对于给定的一列数据，按照给定的顺序建立双向链表，按照关键字找到相应节点，输出此节点的前驱节点关键字及后继节点关键字。

 Input
 第一行两个正整数n（代表节点个数），m（代表要找的关键字的个数）。第二行是n个数（n个数没有重复），利用这n个数建立双向链表。接下来有m个关键字，每个占一行。

 Output
 对给定的每个关键字，输出此关键字前驱节点关键字和后继节点关键字。如果给定的关键字没有前驱或者后继，则不输出。
 注意：每个给定关键字的输出占一行。一行输出的数据之间有一个空格，行首、行末无空格。

  

 Sample
 Input
 10 3
 1 2 3 4 5 6 7 8 9 0
 3
 5
 0
 Output
 2 4
 4 6
 9
 */
#include<iostream>

using namespace std;

struct Node
{
    int data;
    Node *Back;
    Node *Next;
};

int main()
{
    int n,m;
    int t;

    Node *head = new Node;
    Node *p=head;
    p->Next=nullptr;

    cin>>n>>m;

    while(n--)
    {
        Node *t = new Node;
        cin>>t->data;

        t->Back=p;
        t->Next=p->Next;
        p->Next=t;
        p=t;
    }


    while(m--)
    {
        cin>>t;
        int flag=0;

        p=head->Next;
        while(p->data!=t&&p != nullptr)
        {
            p=p->Next;
        }

        if(p->data==t)
            flag=1;

        if(flag==0)
        {
            continue;
        }
        else
        {
            if(p->Back&&p->Back!=head)
            {
                cout<<p->Back->data;
                if(p->Next)
                    cout<<" ";
            }

            if(p->Next)
            {
                cout<<p->Next->data;
            }

            cout<<endl;
        }

    }

    return 0;
}
