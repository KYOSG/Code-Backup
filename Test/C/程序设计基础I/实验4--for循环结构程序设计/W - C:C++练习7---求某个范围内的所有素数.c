#include<stdio.h>
int main()
{
    int n,flag,i,i2,count = 0;
    
    scanf("%d",&n);
    
    for (i=2; i<n; i++)
    {
        flag=0;
        if (n==2)
        {
            printf("2 ");
        }
        for (i2=2; i2<i; i2++)
        {
            if (i%i2==0)
            {
                flag++;
                break;
            }
            else
                continue;
        }
        if (flag==0)
        {
            printf("%d ",i);
            count++;
        }
        if (count%10==0)
        {
            printf("\n");
        }
    }
    
    return 0;
}
