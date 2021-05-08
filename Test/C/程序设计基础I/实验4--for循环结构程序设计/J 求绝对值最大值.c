/*
 Description

 求n个整数中的绝对值最大的数。
 Input

 输入数据有2行，第一行为n，第二行是n个整数。
 Output

 输出n个整数中绝对值最大的数。
 Sample

 Input

 5
 -1 2 3 4 -5
 Output

 -5
 */
#include<stdio.h>
int main()
{
    int n=0,t = 0;
    int max = 0,num=0,temp = 0;
    int i=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&num);
        if (num<0)
        {
            temp=-num;
        }
        else
        {
            temp=num;
        }
        if(temp>max)
        {
            max=temp;
            t=num;
        }
    }
    printf("%d\n",t);
    return 0;
    
}
