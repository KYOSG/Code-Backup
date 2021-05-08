/*
 Description
 输入英文句子，输出该句子中除了空格外出现次数最多的字符及其出现的次数。

 Input
 输入数据包含多个测试实例，每个测试实例是一个长度不超过100的英文句子，占一行。

 Output
 逐行输出每个句子中出现次数最多的字符及其出现的次数（如果有多个字符的次数相同，只输出ASCII码最小的字符）。

 Sample
 Input
 I am a student
 a good programming problem
 ABCD abcd ABCD abcd
 Output
 a 2
 o 4
 A 2
*/
#include<stdio.h>
#include<string.h>
int main()
{
    long int len;
    int i,max,j,j_1,flag;
    char str[100],sum_1[26],sum_2[26],l_1[26],l_2[26],c;
    for(i=0,c='a';i<26;i++,c++)
    {
        l_1[i]=c;
    }
    for(i=0,c='A';i<26;i++,c++)
    {
        l_2[i]=c;
    }
    while(gets(str)!=NULL)
    {
        max=0;
        memset(sum_1,0,sizeof(sum_1));
        memset(sum_2,0,sizeof(sum_2));

        len=strlen(str);

        for(i=0;i<len;i++)
        {
            for (j = 0; j < 26; j++)
            {
                if (l_1[j]==str[i])
                {
                    sum_1[j]++;
                }
                if (l_2[j]==str[i])
                {
                    sum_2[j]++;
                }
            }
        }

        for(i=0;i<26;i++)
        {
            if (max<sum_1[i])
            {
                max=sum_1[i];
                j_1=i;
                flag=1;
            }

        }
        for(j=25;j>=0;j--)
        {
            if (max<=sum_2[j])
            {
                max=sum_2[j];
                j_1=j;
                flag=0;
            }
        }
        if (flag==0)
            printf("%c %d\n",l_2[j_1], max);
        else if (flag==1)
            printf("%c %d\n",l_1[j_1], max);

    }

    return 0;
}
