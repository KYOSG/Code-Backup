/*
 Description
 请将一串长度为5的纯字母文本译成一个密码，密码规律如下：用原来的字母后面的第4个字母代替原来的字母。如C用G代替（文本中不存在W/w、X/x、Y/y、Z/z等字母），最后得到的文本即为密码。

 Input
 输入一串文本，长度固定为5。

 Output
 输出对应的密码。格式为：
 password is 密码

 Sample
 Input
 China
 Output
 password is Glmre
 */
#include<stdio.h>
int main()
{
    char a[5];

    int i;

    for(i=0;i<5;i++)
    {
        scanf("%c",&a[i]);
    }

    for(i=0;i<5;i++)
    {
        a[i]=a[i]+4;
    }
    printf("password is ");
    for(i=0;i<5;i++)
    {
        printf("%c",a[i]);
    }

    return 0;
}
