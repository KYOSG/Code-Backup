/*
 
 Description

 输入三个用 `` \ `` 分割的正整数 a b c 代表日，月，年，

 要求按照输入样式原样输出。
 Input

 三个int范围内的正整数，中间用 `` \ `` 分割。
 Output

 按题目描述原样输出。
 Sample

 Input

 9\17\2018
 Output

 9\17\2018

*/
#include<stdio.h>
int main()
{
    
    int a, b, c;
    char d, e;
    
    scanf("%d %c %d %c %d",&a, &d, &b, &e, &c);
    
    printf("%d%c%d%c%d", a, d, b, e, c);
    
    return 0;
    
}
