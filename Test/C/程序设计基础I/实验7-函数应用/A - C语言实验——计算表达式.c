#include<stdio.h>
#include<math.h>
double f(int x,int n);
int main()
{
    int n,x;

    scanf("%d %d",&x,&n);

    printf("%.2lf\n",f(x,n));

    return 0;
}
double f(int x,int n)
{
    int i;
    double t=x;

    for(i=1;i<=n;i++)
    {
        t=sqrt((double)(i+t));
    }

    return t;
}
