/*
 Description

 从键盘上输入一个小写字母，然后将小写字母装换成大写字母输出！
 Input

 从键盘上输入一个小写字母。
 Output

 小写字母装换成大写字母输出。
 
 解题思路：
        将一个小写字符转换成大写字符，只需要将这个字符ASCII减去32；将一个大写字符转换成小写字符，则给这个字符ASCII加上32
        A => a -32
        a => A +32
 */
#include <stdio.h>
int main()
{
    
    char a;
    
    a = getchar();
    
    a = a - 32;
    
    putchar(a);
    
    return 0;
}
