#include <stdio.h>
int main()
{
    double x, sum, t, item;
    int n, i;
    while (scanf("%lf %d", &x, &n)==2)
    {
        t = x*x;
        item = 1.0;
        sum = 1.0;
        for (i=1; i<=n; i++)
        {
            item *= -t;
            item /= (i*2-1)*(i*2);
            sum += item;
        }
        printf("%.4lf\n", sum);
    }
    return 0;
}

