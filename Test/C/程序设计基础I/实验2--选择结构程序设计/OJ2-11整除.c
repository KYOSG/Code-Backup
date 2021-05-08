/*
 Description
 判断一个数n能否同时被3和5整除。

 Input
 输入一个正整数n。

 Output
 如果能够同时被3和5整除，输出Yes，否则输出No。

 Sample
 Input
 15
 Output
 Yes
 */
#include <stdio.h>
int main ()
{
    int a;
    
    scanf("%d", &a);
    
    if (( a % 3 == 0) && (a % 5 == 0) )
        printf("Yes");
    else
        printf("No");
    
    return 0;
}
