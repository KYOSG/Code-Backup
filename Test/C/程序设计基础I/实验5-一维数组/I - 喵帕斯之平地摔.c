#include<stdio.h>
int main ()
{
int n,i,a,sum=0,i2;

while(scanf("%d",&n)!=EOF)
{
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(((i>1)||((i+1)<n)))
            {
                if((a[i]>a[i+1])&&(a[i]>a[i-1]))
                {
                    sum++;
                }
            }

    }
  printf("%d\n",sum);
    sum=0;
}
return 0;
}
