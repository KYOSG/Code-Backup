#include<stdio.h>
#include<math.h>
double f(int n,int m);
int main()
{

    int n,m;

    while(~scanf("%d %d",&n,&m))
    {
        printf("%.2lf\n",f(n,m));
    }

    return 0;
}

double f(int n,int m)
{
    double j=n,i;
    double sum=0;

    for(i=0;i<m;i++)
    {
        sum=sum+j;
        j = sqrt(j);
    }

    return sum;
}
