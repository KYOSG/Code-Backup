#include<stdio.h>
 int main ()
{
    float pi = 3.1415926;
    int r,h;
    float L,S,SC,V;
    
    scanf("%d %d", &r, &h);
    
    L = pi * r * 2;
    S = pi * r * r;
    SC = L*h;
    V = S * h;
    
    printf("%.2f %.2f %.2f %.2f", L, S, SC, V);
    
    return 0 ;
}
