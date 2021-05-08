/*
 Description
 把一个字符串里所有的大写字母换成小写字母，小写字母换成大写字母。其他字符保持不变。

 Input
 输入为一行字符串，其中不含空格。长度不超过80个字符。

 Output
 输出转换好的字符串。

 Sample
 Input
 ABCD123efgh
 Output
 abcd123EFGH
 */
#include<stdio.h>
#include<string.h>
int main()
{
    char ch[80],b[80];
    int i,flag;

    gets(ch);

    flag= strlen(ch);

    for(i=0;i<flag;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
            printf("%c",ch[i]-32);
        else if(ch[i]>='A'&&ch[i]<='Z')
            printf("%c",ch[i]+32);
        else
            printf("%c",ch[i]);
    }
    return 0;
}
