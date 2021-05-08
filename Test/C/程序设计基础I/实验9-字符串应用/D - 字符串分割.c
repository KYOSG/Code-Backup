/*
 Description
 bLue 获得了一个字符串，现在他要把这个字符串按照某个分隔符来分割成若干个字符串，你能帮他实现吗？

 Input
 输入数据有多组（数据组数不超过 100），到 EOF 结束。

 每组数据输入一行，格式为 "s c"，其中 s 为一个不含空格且长度不超过 1000 的字符串，表示待分割的字符串；c 为一个不是空格的字符，表示分隔符。

  

 输入数据保证在待分割的字符串中，分隔符至少出现一次且不会出现在字符串开头或末尾，并且不会出现连续多个分隔符的情况。

 Output
 对于每组数据，输出分割后的字符串，每个字符串占一行。

 Sample
 Input
 123,DE ,
 0123.a,/45/6.8 /
 Output
 123
 DE
 0123.a,
 45
 6.8
 */
#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char s[1000],c;

    while(scanf("%s %c",s,&c)!=EOF)
    {
        for(i=0;i<strlen(s);i++)
        {
            if(s[i]==c)
            {
                s[i]='\n';
            }
        }
        puts(s);
    }

    return 0;
}
