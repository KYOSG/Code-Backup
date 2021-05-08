/*
 Description
  sdut 大学生艺术中心每天都有n个活动申请举办，但是为了举办更多的活动，必须要放弃一些活动，求出每天最多能举办多少活动。

 Input
 输入第一行为申请的活动数n(n<100)，从第2行到n+1行，每行两个数，是每个活动的开始时间b，结束时间e；

 Output
  输出每天最多能举办的活动数。

 Sample
 Input
 12
 15 20
 15 19
 8 18
 10 15
 4 14
 6 12
 5 10
 2 9
 3 8
 0 7
 3 4
 1 3
 Output
 5
 */
#include<iostream>

using namespace std;

struct Node
{
    int st;
    int end;
    int num;
};

int main()
{
    int n;
    Node a[110]={0};

    cin>>n;

    for(int i=0;i<n;i++)
    {
        cin>>a[i].st>>a[i].end;

        a[i].num=i+1;
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j].end>a[j+1].end)
            {
                swap(a[j],a[j+1]);
            }
        }
    }
    int count=1;
    int t=a[0].end;

    for(int i=1;i<n;i++)
    {
        if(a[i].st>=t)
        {
            count++;
            t=a[i].end;
        }
    }
    cout<<count<<endl;

    return 0;
}
