/*
 A - 删数问题
 Description

  键盘输入一个高精度的正整数n（≤100位），去掉其中任意s个数字后剩下的数字按照原来的左右次序组成一个新的正整数。编程对给定的n与s，寻找一种方案，使得剩下的数字组成的新数最小。
 Input

 输入两个数字，分别为原始数n，要去掉的数字数s (s < n)。
 Output

  输出去掉s个数后最小的数
 Sample

 Input

 178543  4
 Output

 13
 */
#include<iostream>

using namespace std;

int main()
{
    int n;
    string a;
    a.clear();
    cin>>a>>n;

    int len=a.length();

    while(n)
    {
        int i=0;
        while(i<len&&a[i]<=a[i+1])
        {
            i++;
        }
        a.erase(i,1);
        n--;
    }


    while(a.size()>1&&a[0]=='0')
        a.erase(0,1);

    cout<<a<<endl;


    return 0;
}
