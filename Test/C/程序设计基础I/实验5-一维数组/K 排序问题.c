/*
 Description
 输入10个整数，将它们从小到大排序后输出，并给出现在每个元素在原来序列中的位置。
 Input
 输入数据有一行，包含10个整数，用空格分开。
 Output
 输出数据有两行，第一行为排序后的序列，第二行为排序后各个元素在原来序列中的位置。
 Sample
 Input
 1 2 3 5 4 6 8 9 10 7
 Output
 1 2 3 4 5 6 7 8 9 10
 1 2 3 5 4 6 10 7 8 9
 */
#include<stdio.h>
int main()
{
    int i,t,j;
    int n=10;
    int a[10],c[10];
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
        c[i]=i+1;
    }
    
    for (i=0; i<n-1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
            {
                if(a[j] > a[j+1])
                {
                    t = a[j];
                    a[j] = a[j+1];
                    a[j+1] = t;
                    
                    t = c[j];
                    c[j] = c[j+1];
                    c[j+1] = t;
                    
                }
            }

    }
    
    for (i=0; i<n; i++)
    {
        if (i==0)
        {
            printf("%d",a[0]);
        }
        else
            printf(" %d",a[i]);
    }
    
    printf("\n");
    
    for (i=0; i<n; i++)
    {
        if (i==0)
        {
            printf("%d",c[0]);
        }
        else
            printf(" %d",c[i]);
    }
    
    return 0;
}
