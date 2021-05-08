/*
 Description
 时间过得真快啊，又要过年了，同时，我们的人生也增长了一年的阅历，又成熟了一些。可是，你注意过今年是不是闰年呢，明年呢？
 Input
 只有一个整数year，代表年份。

 Output
 如果是闰年输出Yes，否则输出No。

 Sample
 Input
 2000
 Output
 Yes
 */
#include <stdio.h>
int main ()
{
    int year;
    
    scanf("%d", &year);
    
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}
