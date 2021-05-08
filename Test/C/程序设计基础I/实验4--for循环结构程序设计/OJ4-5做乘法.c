/*
 
 Description

 请用C语言编写一个程序。此程序接收一个正整数N，然后打印输出“N次N*(1->N)格式”的数据。例如：此程序接收正整数5，那会输出以下格式的数据：
 5*1=5
 5*2=10
 5*3=15
 5*4=20
 5*5=25
  
 Input

 只有一个正整数N（N<=100）。
 Output


 输出共N行数据，如上面的例子所示。
 Sample

 Input

 5
 Output

 5*1=5
 5*2=10
 5*3=15
 5*4=20
 5*5=25
 */
#include<stdio.h>
int main()
{
    int sum=1,i, n;
    
    scanf("%d",&n);
    
    for (i=1; n>=i; i++)
    {
        sum = n*i;
        printf("%d\*%d\=%d\n", n, i, sum);

    }
        return 0;
}




























/*
#include <stdio.h>
int main()
{
    int n;
    int i;
    int y;
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
    {
        y = n * i;
        printf("%d*%d=%d\n",n,i,y);
    }
    return 0;
}

*/
