/*
 Description



  

 莲酱要上一年级了，但是老师给他出了一个特别难的算术题。

 老师给出了一个函数

  

 F(m, n)的定义是：

 若m=0，返回n+1。

 若m>0且n=0，返回F(m-1,1)。

 若m>0且n>0，返回F(m-1,F(m,n-1))。

  

 给出 m 和 n，计算 F(m, n) 的值。
 Input

 第一行输入一个整数 t， 代表有 t 组数据。(1 <= t <= 15)

 每组数据输入一行，包含两个非负整数 m，n。(0 <= m <= 3, 0 <= n <= 10)
 Output

 每组数据输出一行，为 F(m, n) 的答案。
 Sample

 Input

 3
 3 2
 3 10
 2 1
 Output

 29
 8189
 5
 */
#include<stdio.h>
long long int f(int m,int n);

int main()
{
    int n,m,N;
    int i,j;
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d %d",&m,&n);
        printf("%lld\n",f(m,n));
    }
    
    return 0;
}
long long int f(int m,int n)
{
    if(m==0)
        return n+1;
    else if(m>0&&n==0)
        return f(m-1, 1);
    else if(m>0&&n>0)
        return f(m-1,f(m,n-1));

}
