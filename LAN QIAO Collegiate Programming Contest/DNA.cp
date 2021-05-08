/*
 题目描述
 小强从小就喜欢生命科学，他总是好奇花草鸟兽从哪里来的。终于， 小强上中学了，接触到了神圣的名词--DNA.它有一个双螺旋的结构。这让一根筋的小强抓破头皮，“要是能画出来就好了” 小强喊道。现在就请你帮助他吧

 输入
 输入包含多组测试数据。第一个整数N（N<=15）,N表示组数，每组数据包含两个整数a,b。a表示一个单位的DNA串的行数，a为奇数且 3<=a<=39。b表示重复度(1<=b<=20)。

 输出
 输出DNA的形状，每组输出间有一空行。

 样例输入
 2
 3 1
 5 4
 样例输出
 X X
  X
 X X

 X   X
  X X
   X
  X X
 X   X
  X X
   X
  X X
 X   X
  X X
   X
  X X
 X   X
  X X
   X
  X X
 X   X
 */
#include<iostream>

using namespace std;

int main()
{
    int space,space2;
    int n,a,b;

    cin>>n;

    while(n--)
    {
        cin>>a>>b;

        for(int k=0;k<b;k++)
        {
            space=a-2;
            space2=0;
            bool co= true;
            for(int i=0;i<a-1;i++)
            {
                if(space>0&&co)
                {
                    for(int j=0;j<space2;j++)
                        cout<<' ';
                    space2++;

                    cout<<'X';

                    for(int j=0;j<space;j++)
                        cout<<' ';
                    space-=2;
                    cout<<'X'<<endl;
                }
                else if(co)
                {
                    for(int j=0;j<space2;j++)
                        cout<<' ';
                    cout<<'X'<<endl;
                    space2--;
                    co= false;
                    space=1;

                }
                else
                {
                    for(int j=0;j<space2;j++)
                        cout<<' ';
                    space2++;
                    cout<<'X';

                    for(int j=0;j<space;j++)
                        cout<<' ';
                    space+=2;
                    cout<<'X'<<endl;
                }

            }
        }

        space=a-2;
        space2=0;
        for(int j=0;j<space2;j++)
            cout<<' ';
        space2++;

        cout<<'X';

        for(int j=0;j<space;j++)
            cout<<' ';
        space-=2;
        cout<<'X'<<endl<<endl;

    }

    return 0;
}
