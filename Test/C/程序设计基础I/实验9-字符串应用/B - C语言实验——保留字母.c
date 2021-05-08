/*
 Description
 编一个程序，输入一个字符串，将组成字符串的所有非英文字母的字符删除后输出。

 Input
 一个字符串，长度不超过80个字符。

 Output
 删掉非英文字母后的字符串。

 Sample
 Input
 abc123+xyz.5
 Output
 abcxyz
 */
#include<stdio.h>
#include<string.h>
int main()
{
    char a[80],b[80];

    long int flag,i,j;
    char t;

    gets(a);

    flag=strlen(a);

    for(i = 0, j = 0; i < flag; i++)
    {
        t = a[i];
        if((t >= 'A' && t <= 'Z') || (t >= 'a' && t <= 'z'))
        {
            b[j] = t;
            j++;
        }
    }

    flag=strlen(b);

    for(i=0;i<flag;i++)
    {
        printf("%c",b[i]);
    }
    return 0;
}
