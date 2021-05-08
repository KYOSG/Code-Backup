/*
 Description

 输入N个整数，按照输入的顺序建立单链表存储，并遍历所建立的单链表，输出这些数据。
 Input

 第一行输入整数的个数N；
 第二行依次输入每个整数。
 Output

 输出这组整数。
 Sample

 Input

 8
 12 56 4 6 55 15 33 62
 Output

 12 56 4 6 55 15 33 62
 Hint

 不得使用数组！
 */
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int num;
    struct node *next;
};
int main()
{
    struct node *head;
    struct node *tail;
    struct node *p;
    head = (struct node *)malloc(sizeof (struct node));
    int n,i;
    tail = head;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        p=(struct node *)malloc(sizeof (struct node));
        scanf("%d",&p->num);
        p->next=NULL;
        tail->next=p;
        tail = p;
    }
    p=head->next;

    while(p!=NULL)
    {
        printf("%d ",p->num);
        p=p->next;
    }

    return 0;
}
