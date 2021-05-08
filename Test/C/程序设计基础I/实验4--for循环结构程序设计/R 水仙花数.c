/*
 Description

 春天是鲜花的季节，水仙花就是其中最迷人的代表，数学上有个水仙花数，是这样定义的：
 “水仙花数”是指一个三位数，它的各位数字的立方和等于其本身，比如：153=13+53+33。
 现在要求输出所有在m和n范围内的水仙花数。
 Input

 输入数据有多组，每组占一行，包括两个整数m和n（100<=m<=n<=999）。
 Output

 对于每个测试实例，要求输出所有在给定范围内的水仙花数，就是说，输出的水仙花数必须大于等于m,并且小于等于n，如果有多个，则要求从小到大排列在一行内输出，之间用一个空格隔开;
 如果给定的范围内不存在水仙花数，则输出no;
 每个测试实例的输出占一行。
 Sample

 Input

 100 120
 300 380
 Output

 no
 370 371
*/
#include<stdio.h>
int main ()
{
    int m,n,n1,n2,t,i,sum=0,judge=0,t2,i2;
    while (scanf("%d %d",&m, &n)!=EOF)
    {
        t2=0;
        if(m>n)
        {
            t=n;
            n=m;
            m=t;
        }
    
        for (i=m; i<=n; i++)//求范围内水仙花数
        {
            for (i2=3,t=i; i2>0; i2--)//循环取数求立方和
            {
                n1=t%10;
                n2=n1*n1*n1;
                
                sum=sum+n2;
            
                t=t/10;
            }
            
            if (sum==i)
            {
                if (t2==0)
                {
                    printf("%d",i);//输出第一个水仙花数
                }
                else
                {
                    printf(" %d",i);//输出非第一个数
                }
                t2++;
                judge++;
                sum=0;//sum初始化
            }
            else
            {
                sum=0;
            }
        }
        if (judge==0)
        {
            printf("no");
        }
            printf("\n");//换行
    }
        return 0;
}

