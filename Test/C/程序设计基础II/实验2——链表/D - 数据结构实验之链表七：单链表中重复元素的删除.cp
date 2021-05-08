/*
 Description
按照数据输入的相反顺序（逆位序）建立一个单链表，并将单链表中重复的元素删除（值相同的元素只保留最后输入的一个）。

Input
第一行输入元素个数 n (1 <= n <= 15)；
第二行输入 n 个整数，保证在 int 范围内。

Output
第一行输出初始链表元素个数；
第二行输出按照逆位序所建立的初始链表；
第三行输出删除重复元素后的单链表元素个数；
第四行输出删除重复元素后的单链表。

Sample
Input
10
21 30 14 55 32 63 11 30 55 30
Output
10
30 55 30 11 63 32 55 14 30 21
7
30 55 11 63 32 14 21
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

    Node *res = new Node;
    Node *pres = res;
    pres->Next= nullptr;

    int n,ans=0;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        Node *t = new Node;

        cin>>t->data;
        head->Next=t;
        t->Next=p;
        p=t;
    }

    cout<<n<<endl;
    p=head->Next;
    while(p != nullptr)
    {
        cout<<p->data<<" ";
        p=p->Next;
    }

    cout<<endl;

    p=head->Next;
    while(p)
    {
        pres=res;
        while(pres)
        {
            if(pres->data==p->data)
            {
                break;
            }
            else
            {
                if(pres->Next!=nullptr)
                {
                    pres=pres->Next;
                    continue;
                }
                else
                {
                    Node *t=new Node;
                    t->data=p->data;
                    t->Next=nullptr;
                    pres->Next=t;
                    ans++;
                    break;
                }
            }
        }
        p=p->Next;
    }

    cout<<ans<<endl;
    pres=res->Next;
    while(pres)
    {
        cout<<pres->data<<" ";
        pres=pres->Next;
    }

    return 0;
}
