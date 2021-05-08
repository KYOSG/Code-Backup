/*
 Description
 小 I 去天津玩啦，一路上，他跟他的同学发生了许多有趣的事。

 当他们路过天津外国语学院时，他发现了许多小姐姐，他眼花缭乱，甚至不知道该去找哪个小姐姐聊天。

 怎么办怎么办！

 于是他想到了你，他拍了一张照片给你，你发现照片里一共有 n 个小姐姐（序号从 0 到 n - 1），每个小姐姐都有自己的风格，可以按特征划分出 3 个特征值  w1 , w2 , w3 ，你知道小 I 特别喜欢 w1 特征值高的小姐姐，不太看重 w3 ，于是你对于每个特征都赋予一个权重，分别对应为0.7 0.2 0.1，你能帮小 I 找出来他发来的这张照片里他最喜欢的小姐姐吗？

 Input
 第一行给出一个整数 n (n <= 1000) ，之后有 n 行数。

 每行数有三个整数 w1, w2, w3，表示三个特征值。

 不存在权值和相等的情况。

 Output
 输出n 个小姐姐中权值和最高的序号。

 Sample
 Input
 3
 1 5 10
 5 1 10
 10 5 1
 Output
 2
 */
#include<iostream>

using namespace std;

struct Node
{
    int num;
    double data;
};

int main()
{
    int n,w1,w2,w3;
    int i,t;
    double max=-1;

    struct Node a[1000];

    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>w1>>w2>>w3;
        a[i].data=w1*0.7+w2*0.2+w3*0.1;
        a[i].num=i;
    }
    t=-1;
    while(n--)
    {
        if(a[n].data>max)
        {
            max=a[n].data;
            t=a[n].num;
        }
    }

    printf("%d",t);
    return 0;
}
