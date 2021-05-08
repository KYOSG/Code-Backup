/*
 Description
 给出含有n个数的升序序列，保证序列中的数两两不相等，这n个数编号从1 到n。
 然后给出q次询问，每次询问给出一个数x，若x存在于此序列中，则输出其编号，否则输出-1。
 Input
 单组输入。首先输入一个整数n(1 <= n && n <= 3000000)，接下的一行包含n个数。
 再接下来的一行包含一个正整数q(1 <= q && q <= 10000),表示有q次询问。
 再接下来的q行，每行包含一个正整数x。
 Output
 对于每次询问，输出一个整数代表答案。
 Sample
 Input
 5
 1 3 5 7 9
 3
 1
 5
 8
 Output
 1
 3
 -1
 */
#include<iostream>

using namespace std;
const int N=300000;
int a[N];

int find(int l,int r,int x)
{
    if(l>r)
        return -1;
    int mid=(l+r)/2;

    if(a[mid]==x)
        return mid+1;
    else if(a[mid]>x)
        return find(l,mid-1,x);
    else if(a[mid]<x)
        return find(mid+1,r,x);
}

int main()
{
    int n,q,x;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];

    cin>>q;
    while(q--)
    {
        cin>>x;
        cout<<find(0,n-1,x)<<endl;
    }
    return 0;
}
