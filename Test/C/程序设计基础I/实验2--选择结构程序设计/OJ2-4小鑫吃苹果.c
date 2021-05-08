/*
 Description
 每年平安夜的时候妈妈都会给小鑫邮寄两个大苹果，两个苹果的重量分别为x，y。以前小鑫都是自己默默的吃掉两个大苹果，但是这次小鑫决定要把最重的苹果送给他的女神。可惜他比较笨分不出哪个苹果重哪个苹果轻，所以请你帮他找到最重的苹果，输出最重的重量。

 Input
 单组输入。
 两个正整数表示苹果的重量x，y(1 <= (x, y) <= 1000)
 Output
  输出两个苹果中最重的重量。
 Sample
 Input
 100 200
 Output
 200
 */
#include<stdio.h>
int main ()
{
    int x, y;
    
    scanf("%d %d", &x, &y);
    
    if (x>y)
        printf("%d", x);
    else
        printf("%d", y);
    
    
    return 0;
    
}
