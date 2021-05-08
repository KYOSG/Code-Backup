/*
 Description

 输入一个字符，输出两行。

 第一行将字符用 ' 包裹。

 第二行将字符用 " 包裹。
 Input

 输入一个字符。
 Output

 按题目描述输出。
 Sample

 Input

 A
 Output

 'A'
 "A"
 */
#include <stdio.h>
int main ()
{
    char a;
    
    scanf("%c",&a);
    
    printf("\'%c\'\n",a);
    printf("\"%c\"",a);
    
    
    return 0;
}
