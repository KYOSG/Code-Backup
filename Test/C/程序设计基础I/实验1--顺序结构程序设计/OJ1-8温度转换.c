#include<stdio.h>

int main()
{
    float C;
    float F;
    
    scanf("%f",&F);
    
    C = 5*( F - 32 ) / 9;
    
    printf("%.2f",C);
    
    return 0;
    
}
