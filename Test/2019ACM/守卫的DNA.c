/*
 Description
 在Ljn计算出了湖深度后，船长Ljj为了奖励Ljn抓了稷下湖所有的鹅给Ljn吃，这个举动严重破坏了稷下湖的生态平衡，湖神为了惩罚他们，把他们关在自闭的荷花里，并由守卫看守。他们为了逃跑和守卫达进行了py交易，他们帮助守卫得出自己的DNA序列，然后守卫帮助他们从荷花中逃走。守卫有一个记录自己DNA序列的字符串，但因为污损其中的部分字符已经看不清以“?”代替，守卫的DNA由“A”“G”“C”“T”四种字符组成，且在字符串中这四个字符的数量都相等，现在你把“?”补充完整，得到守卫的DNA，守卫要求你构造出的字符串是所有情况中字典序最小的，如果存在这种字符串，请输出他，否则输出“impossible”（不包含引号）。

 Input
 第一行包含一个整数n表示字符串的长度。（1≤n≤1000）

 第二行输入一个长度为n的字符串。

 Output
 如果能构造出来请输出构造出的字符串。

 否则否则输出“impossible”（不包含引号）。

 Sample
 Input
 8
 AG?C??CT
 Output
 AGACGTCT
 */
#include<stdio.h>
#include<string.h>
int main()
{
    char dna[1000],fl;
    int a=0,c=0,g=0,t=0;
    int len,i,max;

    scanf("%d",&len);
    getchar();

    if(len%4!=0)
    {
        printf("impossible\n");
        return 0;
    }

    max=len/4;
    gets(dna);

    for(i=0;i<len;i++)//计数
    {
        fl=dna[i];
        switch(fl)
            {
                case 'A':
                    a++;
                    break;
                case 'G':
                    g++;
                    break;
                case 'C':
                    c++;
                    break;
                case 'T':
                    t++;
                    break;
            }
    }
    if (a>max||c>max||t>max||g>max)
    {
        printf("impossible\n");
        return 0;
    }

    for(i=0;i<len;i++)
    {
        if (dna[i]=='?')
        {
            if (a<max)
            {
                dna[i]='A';
                a++;
                continue;
            }
            if (c<max)
            {
                dna[i]='C';
                c++;
                continue;
            }
            if (g<max)
            {
                dna[i]='G';
                g++;
                continue;
            }
            if (t<max)
            {
                dna[i]='T';
                t++;
                continue;
            }
        }
    }

    puts(dna);
    printf("\n");

    return 0;
}

