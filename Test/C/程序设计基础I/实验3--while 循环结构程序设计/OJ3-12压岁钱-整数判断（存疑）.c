/*
 
 Description

    SuShan过年要给孩子们发压岁钱喽，由于家里孩子很多，这可急坏了SuShan。你肯定以为她在担心钱不够，那你错了，她可是个有钱人儿，不差钱儿。她担心的是每个人分多少从而保证公平。
    SuShan从瑞士银行提出1000000来给孩子们分，由于来的孩子的数目不确定，所以SuShan希望你能帮他计算一下每个孩子给多少钱，从而保证每个孩子得到的都是整数。
 Input

 输入有多组数据，第一行 T 代表数据的组数。
 接下来有 T 行，每行一个整数 N，代表孩子的数目，1<= N <= 10000000。

  
 Output

 只有一行。如果能够分给每个孩子相同数目的压岁钱，且都是整数，则输出每个孩子得到的钱数。否则输出No。
  
 Sample

 Input

 3
 1
 2
 3
 Output

 1000000
 500000
 No

 
 */
#include <stdio.h>
int main()
{
    int n, x;
    double a;
    int money = 10000000;
    
    scanf("%d", &x);
    
   while (x--)
   {
       scanf("%d", &n);
       
       if (1 <= n && money >=n)
       {
           a = (double)money / n;
           if (a != (int)a)
           {
               printf("No\n");
           }
           else
               printf("%.0lf\n", a);
       }
       else
       {
           return 0;
       }
       
   }
    return 0;
}

#include<stdio.h>
int main()
{
    int T, N,c,a;
    T= 0;
    scanf("%d",&T);
    
    while (T>0)
    {
        scanf("%d",&N);
        a = 1000000%N;
        c = 1000000/N;
        if (a==0)
            printf("%d\n",c);
        else
            printf("NO\n");
        T=T-1;
        
    }
    
    return 0;
}



#include <stdio.h>
int main()
{
    int money=1000000;
    int i;
    int n;
    scanf("%d",&i);
    while(i--)
    {
        scanf("%d",&n);
        if  (money % n == 0)
            printf("%d\n",money/n);
        else
            printf("No\n");
    }
    return 0;
}
