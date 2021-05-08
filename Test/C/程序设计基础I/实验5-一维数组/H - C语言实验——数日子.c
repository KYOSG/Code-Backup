/*
 Description

 光阴似箭，日月如梭，大学的时间真是宝贵，要抓紧时间AC^_^。你知道今天是这一年第几天吗，掐指一算还是要算好久，呵呵还是让计算机来做吧。这里的问题就是让你来写一个程序，输入某年某月某日，判断这一天是这一年的第几天？
 Input

 输入第一行是数据的组数n<100，下面n行是n组数据，每组数据由3个正整数组成，分别为年、月、日，我们保证每组数据都是有效的日期。
 Output

 输出所输入的日期是这一年的第几天。
 Sample

 Input

 2
 2009 1 1
 2008 1 3
 Output

 1
 3
 */
#include<stdio.h>
int main()
{
    int i,n;
    
    int y,m,d,sum,i2;
    
    
    while(scanf("%d",&n)!=EOF)
    {
        for(i=0;i<n;i++)
        {
            int c[12]={31,28,31,30,31,30,31,31,30,31,30,31};
            
            sum=0;
            scanf("%d %d %d",&y,&m,&d);
            if ((y% 4 == 0 && y % 100 != 0) || y% 400 == 0)
            {
                c[1]=29;
            }
            
            if (m!=1)
            {
                for (i2=1; i2<m; i2++)
                {
                    sum=sum+c[i2-1];
                }
            }
            sum=sum+d;
            printf("%d\n",sum);
            
        }
    }
    
    return 0;
}
