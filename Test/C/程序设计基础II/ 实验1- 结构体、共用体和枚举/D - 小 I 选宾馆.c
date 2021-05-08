/*
 Description

 小 I 去天津玩啦，一路上，他跟他的同学发生了许多有趣的事。

 到了晚上了，小 I 跟他的同学们要选一个宾馆住下了。但是形形色色的宾馆让小 I 不知所措。

 对于一个宾馆来说，有许多特征，比如「价格」、「舒适度」。小I会对每个特征都有一个满意度。

 小I会选择出满意度更高一些的宾馆。

 其中，「价格」对于小 I 来说是最重要的，其次是「舒适度」。

 如果有两个宾馆，如果对「价格」的满意度相同，那么根据「舒适度」进行选择；如果有多个宾馆条件相同，输出编号最小的宾馆。

 小 I 现在处于水深火热之中，因为他们面对一堆宾馆不知所措，他想到了会编程的你，如果你不帮他选出来，他可能就会露宿街头了QAQ~

 你能帮他按照他的意愿找到小I最满意的宾馆吗？
 Input

 给出 n (n <= 5000) 代表 n  个宾馆（编号从 1 - n），随后有 n 行数据。

 每行数据有两个整数，分别代表小I对「价格」、「舒适度」的满意程度，数值越大满意程度越高，满意度的范围从0 - 5000。
 Output

 输出按照描述的条件中小I最满意的宾馆编号，如果有多个宾馆条件相同，输出编号最小的宾馆。
 Sample

 Input

 4
 0 1
 1 0
 1 1
 1 0
 Output

 3
 #include<iostream>
 #include<cstring>
 using namespace std;

 struct Node
 {
     int price;
     int com;
     int num;
 };

 int main()
 {
     Node a[5010];
     memset(a,0,sizeof (a));

     int N;
     cin>>N;

     for(int i=0;i<N;i++)
     {
         cin>>a[i].price>>a[i].com;
         a[i].num=i+1;
     }

     for(int i=0;i<N-1;i++)
     {
         for(int j=0;j<N-i-1;j++)
         {
             if(a[j].price<a[j+1].price)
                 swap(a[j],a[j+1]);
             if(a[j].price==a[j+1].price&&a[j].com<a[j+1].com)
                 swap(a[j],a[j+1]);
         }
     }

     cout<<a[0].num<<endl;

     return 0;
 }
 */
#include<stdio.h>
struct node
{
    int name;
    int prise;
    int comfort;
};
int main()
{
    int n;
    struct node a[5500];
    int i,t,j,fl;

    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        a[i].name = i;
        a[i].prise = 0;
        a[i].comfort = 0;
    }

    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&a[i].prise,&a[i].comfort);
    }

    t=0;
    j=-1;
    fl=1;
    for(i=1;i<=n;i++)
    {
        if(a[i].prise>t)
        {
            t=a[i].prise;
            fl=a[i].name;
            j=a[i].comfort;
        }
        if(a[i].prise==t)
        {
            if(a[i].comfort>j) {
                t = a[i].prise;
                fl = a[i].name;
                j = a[i].comfort;
            }
            if(a[i].comfort==j)
            {
                if(a[i].name<=fl)
                {
                    t = a[i].prise;
                    fl = a[i].name;
                    j = a[i].comfort;
                }
            }
        }
    }

    printf("%d\n",fl);

    return 0;
}

