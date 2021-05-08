
/*
 Description

 从键盘输入两个时间点(24小时制），输出两个时间点之间的时间间隔，时间间隔用“小时:分钟:秒”表示。
 如：3点5分25秒应表示为--03：05：25.假设两个时间在同一天内，时间先后顺序与输入无关。
 Input

 输入包括两行。
 第一行为时间点1。
 第二行为时间点2。
 Output

 以“小时:分钟:秒”的格式输出时间间隔。
 格式参看输入输出。
 Sample

 Input

 12:01:12
 13:09:43
 Output

 01:08:31
 */

#include<stdio.h>
int main()
{
    int a,b,d,e,f,g,i, j, k, s2, m2, h2;
    char c;
    
    scanf("%d %c %d %c %d", &a, &c, &b, &c, &d);
    scanf("%d %c %d %c %d", &e, &c, &f, &c, &g);
    
    //大小置换
    if (a < e)
    {
        h2 = a;
        a = e;
        e = h2;

        m2 = b;
        b = f;
        f = m2;
        
        s2 = d;
        d = g;
        g = s2;
    }
    else
    {
        a = a;
        b = b;
        d = d;
        e = e;
        f = f;
        g = g;
    }
        
    i = a - e;
    j = b - f;
    k = d - g;
    
    // 秒
    if (k < 0)
    {
        k = 60 + k;
        j = j - 1;
    }
    
    else
        k = k;
    // 分
    if (j < 0)
    {
        j = 60 + j;
        i = i - 1;
    }
    
    else if (j >= 60)
    {
        j = j - 60;
        i = i + 1;
    }
    else if (j >=0 && j <= 60)
        j = j;
    // 时
    if (i < 0)
        i = - i;
    else
        i = i;
    
    printf("%02d%c%02d%c%02d", i, c, j, c, k);
    
    
    return 0;
    
}
