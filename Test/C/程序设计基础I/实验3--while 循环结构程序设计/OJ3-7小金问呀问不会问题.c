/*
 
 Description

 众所周知，C语言的学习是我们程序设计基础的重点和主要内容。
 小金在班里是一个爱学习的好孩子，但是他的编程能力却有点差，不过他坚信自己一定可以进步并追上其他同学。
  
 Input

 多组输入。
 从键盘读入一个整数n，如果n >= 0代表小金考试进步了，如果n < 0代表小金退步了。
 Output

 如果小明进步了输出”Yes”，反之输出”No”。输出不包括引号，输入输出各占一行，保证数据合法。
 Sample

 Input

 100
 -100
 Output

 Yes
 No
 
 */
#include<stdio.h>
int main()
{
    int n;
    
    while(scanf("%d", &n) != EOF)
    {
        if (n >= 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    
    return 0;
}
