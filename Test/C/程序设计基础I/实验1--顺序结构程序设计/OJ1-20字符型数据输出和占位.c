/*
 Description

 输入一个字符，请你按如下要求输出：

 第一行字符数据默认输出，

 第二行字符型数据输出共占 4 位，右对齐，左补 3 个空格并在两端添加星号包裹，

 第三行字符型数据输出共占 4 位，左对齐，右补 3 个空格并在两端添加星号包裹。
 Input

 输入一个字符 。
 Output

 共三行，按题目描述输出。
 Sample

 Input

 c
 Output

 c
 *   c*
 *c   *

 */
#include<stdio.h>
int main()
{
    char a;
    
    scanf("%c", &a);
    
    printf("%c\n", a);
    printf("*%4c*\n", a);
    printf("*%-4c*\n", a);
    
    return 0;
    
}

