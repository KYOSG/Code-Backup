/*
 Description
 不知道是从哪个学校开始兴起的还是哪个领导的决定，学校里每周都要检查宿舍卫生！大家发现没有，检查宿舍卫生是件很奇葩的事情，它剥削了每件物品的意义：垃圾桶里不能有垃圾，挂钩上不能挂东西，桌子上不能放东西，床上不能躺人！！假设检查卫生分为五项成绩：垃圾桶得分、挂钩得分、桌子得分、床铺得分和窗台得分。每项满分20分，总分满分为100分。按照计算机学院奇葩的规定，宿舍成绩在85分以下就要算作不合格。某天，宿管阿姨给了你一个检查完宿舍的打分表，让你帮忙统计下有多少个宿舍没有达到85分(等于85分是可以的)，并且统计成绩最高分。

 Input
 第一行为一个整数 n (0 < n <= 100)，代表你要统计的宿舍的总数，接下来 n 行每行为 5 个整数，代表宿舍五项成绩的得分。

 Output
 输出只有一行，由一个空格分隔的两个整数：总分不合格的宿舍数和宿舍总分最高分，如果最高分仍小于85分，则输出为不合格的宿舍数和“No”(不包含引号)。

 Sample
 Input
 5
 1 2 3 4 5
 10 20 10 20 20
 20 20 20 20 20
 15 15 15 20 20
 10 10 10 10 10
 Output
 3 100
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
    int tem;
    int sum;
    Node *head=new Node;
    Node *p=head;
    head->Next=nullptr;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        Node *t = new Node;
        sum=0;
        for(int j=0;j<5;j++)
        {
            cin>>tem;
            sum+=tem;
        }
        t->data=sum;

        t->Next=nullptr;
        p->Next=t;

        p=t;
    }

    p=head->Next;

    int max=-1;
    sum=0;
    while(p!=nullptr)
    {
        if(p->data<85)
        {
            sum++;
        }
        if(p->data>=max)
        {
            max=p->data;
        }
        p=p->Next;
    }

    cout<<sum<<" ";
    if(max<85)
        cout<<"No"<<endl;
    else
        cout<<max<<endl;
    return 0;
}
