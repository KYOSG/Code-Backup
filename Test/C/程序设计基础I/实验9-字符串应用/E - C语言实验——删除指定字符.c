/*
 Description
 从键盘输入一个字符串给str和一个字符给c，删除str中的所有字符c并输出删除后的字符串str。

 Input
 第一行是一个字符串，不超过100个字符；
 第二行是一个字符。

 Output
 删除指定字符后的字符串。

 Sample
 Input
 sdf$$$sdf$$
 $
 Output
 sdfsdf
 */
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,len;
    char str[100],c,ch[100];

    memset(ch,0,sizeof(ch));

    scanf("%s %c",str,&c);

    len=strlen(str);

    for(i=0,j=0;i<len;i++)
    {
        if (str[i]!=c)
        {
            ch[j]=str[i];
            j++;
        }
    }

    puts(ch);

    return 0;
}
