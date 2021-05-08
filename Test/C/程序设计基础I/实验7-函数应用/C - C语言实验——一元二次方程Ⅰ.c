#include<stdio.h>
#include<math.h>
void f(int a,int b,int c);
int main()
{
    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    f(a,b,c);

    return 0;
}
void f(int a,int b,int c)
{
    double x1,x2,t;

    x1=(double)(-b+sqrt(b*b-4*a*c))/(2*a);
    x2=(double)(-b-sqrt(b*b-4*a*c))/(2*a);

  if (x2>x1)
  {
      t=x2;
      x2=x1;
      x1=t;
  }
    printf("%.2lf %.2lf",x1,x2);
}
