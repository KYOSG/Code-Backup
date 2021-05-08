#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    float f;
    
    scanf("%d %d %d", &a, &b, &c);
    
    d = a + b + c;
    
    e = a * b * c;
    
    f = (d + 0.00) / 3;
    
    printf("%d %d %.2f", d, e, f);
    
    return 0;
}
