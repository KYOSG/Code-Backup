/*
 Description

 从键盘输入一个整数n(1≤n≤9)，打印出指定的菱形。
 Input

 正整数n（1≤n≤9）。
 Output

 指定的菱形。
 第一行前面有n-1个空格，第二行有n-2个空格，依此类推。
 Sample

 Input

 5
 Output

     *
    ***
   *****
  *******
 *********
  *******
   *****
    ***
     *
#include<stdio.h>
int main()
{
    int n,i,t,t2,clock;
    scanf("%d",&n);
    t=n;
    t2=1;
    clock=2*n-1;
    while (clock!=n-1)
    {
        for (i=t-1;i>0; i--)
        {
            printf(" ");
        }
        for (i=t2; i>0; i--)
        {
            printf("*");
        }
        printf("\n");
        
        
        t=t-1;
        t2=t2+2;
        clock--;
    }
    t=2*n-2;
    t2=1;
    while (clock!=0)
    {
        for (i=t2; i>0; i--)
        {
            printf(" ");
        }
        for (i=t;i!=0; i--)
        {
            printf("*");
        }
        
        printf("\n");
        
        
        t=t-1;
        t2++;
        clock--;
    }
    return 0;
}
*/
#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        for(j=1;j<i;j++)
            printf("*");
        printf("\n");
    }
    for(i=n-1;i>0;i--)
    {
        for(j=1;j<=n-i;j++)
            printf(" ");
        for(j=1;j<=i;j++)
            printf("*");
        for(j=i-1;j>0;j--)
            printf("*");
        printf("\n");
    }
    return 0;
}
