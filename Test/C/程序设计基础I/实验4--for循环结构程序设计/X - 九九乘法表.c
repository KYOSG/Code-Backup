/*
 Description

       九九乘法表是数学学习的基础，今天我们就来看看乘法表的相关问题。《九九乘法歌诀》，又常称为“小九九”,如下图所示。你的任务是写一个程序，对于给定的一个正整数 n ，输出“九九乘法表”的前 n 行。例如，输入 n 为 9，你的程序的输出将为下图：


 Input

 输入包含多组测试数据，以 EOF 结束。每组测试数据只包含一个正整数 n (0 < n < 10)。
 Output

 对于每组测试数据，输出上图所示“九九乘法表”的前 n 行。
 Sample

 Input

 2
 3
 Output

 1*1=1
 1*2=2 2*2=4
 1*1=1
 1*2=2 2*2=4
 1*3=3 2*3=6 3*3=9
 Hint

 必须使用for循环，如果你的代码中出现例如

 if(n == 1) printf(“1*1=1\\n”);

 if(n == 2) printf(“1*1=1\\n1*2=2 2*2=4\\n”);

 或其类似语句，本题不得分。
 SubmitSolutions
 */
#include<stdio.h>
int main()
{
    int n,i,i2,mu,flag=0;

    while (scanf("%d",&n)!=EOF)
        for (i=1;i<=n;i++)
        {
            flag=0;
            for (i2=1;i2<=i;i2++)
            {
                mu=i*i2;
                if (flag==0)
                    printf("%d*%d=%d",i2,i,mu);
                else
                     printf(" %d*%d=%d",i2,i,mu);
                flag++;

            }
            printf("\n");
        }


    return 0;
}
