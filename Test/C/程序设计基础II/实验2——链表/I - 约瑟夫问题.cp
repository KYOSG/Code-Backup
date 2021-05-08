/*
 Description
 n个人想玩残酷的死亡游戏，游戏规则如下：

 n个人进行编号，分别从1到n，排成一个圈，顺时针从1开始数到m，数到m的人被杀，剩下的人继续游戏，活到最后的一个人是胜利者。

 请输出最后一个人的编号。
 Input
 输入n和m值。
 Output
 输出胜利者的编号。
 Sample
 Input
 5 3
 Output
 4
 Hint
 第一轮：3被杀第二轮：1被杀第三轮：5被杀第四轮：2被杀
 */
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *Next;
};
int main()
{
    int n,m;
    int i,t;
    scanf("%d %d",&n,&m);
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *tail =head;
    struct Node *p,*die;
    tail->Next = NULL;

    for(i=1;i<n;i++)
    {
        p = (struct Node *)malloc(sizeof (struct Node));
        p->data = i+1;
        p->Next = NULL;
        tail->Next = p;
        tail = p;
    }
    head->data = 1;
    tail->Next = head;
    t=n;

    p=head;
    while (t>1)
    {

        for(i=0;i<m-2;i++)
        {
            p=p->Next;
        }
        die = p->Next;

        p->Next=die->Next;
        free(die);
        t--;
        p=p->Next;
    }
    printf("%d\n",p->data);

    return 0;
}
