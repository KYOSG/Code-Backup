/*
 Description

 小瑜是个爱吃糖果的馋鬼，天天嚷着要爸爸买糖果，可是爸爸很忙，哪有时间啊，于是就让小瑜自己去了，糖果3角钱一块，爸爸给小瑜n元钱，请你告诉小瑜最多能买几块糖，还剩几角钱？
 Input

 输入爸爸给小瑜的钱n元，n为整数。
 Output

 小瑜最多能买回的糖块数以及剩下的钱（单位为：角），用空格分隔。
 */
#include <stdio.h>

int main()
{
    int m,n,t,c;
    
    scanf("%d", &m);
    
    t = m*10;
    
    c = t % 3;
    
    n = t / 3;
    
    printf("%d %d", n, c);
    
    return 0;
    
}
