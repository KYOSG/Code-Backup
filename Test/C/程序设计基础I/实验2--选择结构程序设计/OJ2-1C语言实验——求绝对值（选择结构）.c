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
#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);

    if (a<0)
        printf("%d", -a);
    else
        printf("%d", a);


    return 0;
}
