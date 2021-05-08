/*
 #include<stdio.h>
 long long int f(int n,int m);

 int main()
 {
     int n,m,N;

     scanf("%d",&N);

     for(int i=0;i<N;i++)
     {
         scanf("%d %d",&n,&m);
         printf("%lld\n",f(n,m));
     }


     return 0;
 }

 long long int f(n,m)
 {
     if(m==0||n==1||m==n)
         return 1;
     else
         return f(n-1,m-1)+f(n-1,m);
 }
 */
#include<stdio.h>
long long int f(int n,int m);

int main()
{
    int n,m,N;

    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d %d",&n,&m);
        printf("%lld\n",f(n,m));
    }


    return 0;
}

long long int f(n,m)
{
    if(m==0||n==1||m==n)
        return 1;
    else
        return f(n-1,m-1)+f(n-1,m);
}
