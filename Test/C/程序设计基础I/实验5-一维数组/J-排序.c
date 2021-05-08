/*
 Description

     给你N(N<=100)个数,请你按照从小到大的顺序输出。
 Input

     输入数据第一行是一个正整数N,第二行有N个整数。
 Output

     输出一行，从小到大输出这N个数，中间用空格隔开。
 Sample

 Input

 5
 1 4 3 2 5
 Output

 1 2 3 4 5
 */
#include<stdio.h>
int main()
{
    int n,i,t,j;
    
    scanf("%d",&n);
    
    int a[n];
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
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
    
    return 0;
}
