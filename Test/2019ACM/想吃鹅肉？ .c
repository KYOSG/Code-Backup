/*
 想吃鹅肉？
 Description
 在大航海时代，Ljn和船长Ljj乘坐塞尔号在稷下湖中滑水，Ljn注意到了湖面上有一朵自闭的荷花，走进后发现花苞距离河面高度为H厘米，Ljn又抓住荷花向正前航行了L厘米，在这个点上，自闭的荷花花苞恰好碰到了湖面。假设荷花生长湖底A点，且竖直生长，保证最初花苞正好生长在A点正上方。现在船长Ljj要求Ljn计算湖的深度，算出来后就要请Ljn吃烤鹅肉，Ljn为了能吃更多的鹅肉，想让他帮他写个程序直接计算湖的深度，并输出。

 模型如图：


 Input
 一行包含两个整数H和L(1≤H<L≤1000000)。

 Output
 输出仅包含一个数——湖的深度（A点到湖面的距离）结果要求保留两位小数。

 Sample
 Input
 1 2
 Output
 1.50
 */
#include<stdio.h>
int main()
{
    long long int h,l;
    double d;

    scanf("%lld %lld",&h,&l);

    d=(double)(l*l-h*h)/(2.0*h);

    printf("%.2lf\n",d);

    return 0;
}
