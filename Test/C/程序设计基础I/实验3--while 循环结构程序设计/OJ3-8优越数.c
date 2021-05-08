/*
 
 Description


 给定3个数，如果有两个数大于他们的平均数则称这组数为优越数。（定义纯属虚构）
 Input


 输入第一行是一个整数: 表示测试数据的组数。
 对于每组测试数据，仅一行3个整数。
 Output


 对于每组输入数据输出一行，判断它是否为一组优越数，如果是输出“Yes”（输出不包括引号），否则输出“No”。
 Sample

 Input

 2
 1 2 3
 1 4 4
 Output

 No
 Yes
 
 */
#include <stdio.h>
int main ()
{
    int a, n1, n2, n3;
    int e, s;
    
    scanf("%d", &a);
    
    while (scanf("%d %d %d", &n1, &n2, &n3)!= EOF)
    {
        s = n1 + n2 + n3;
        e = (float)s / 3;
        if ((n1 > e && n2 > e) || (n1 > e && n3 >e)||(n2 > e && n3 >e))
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}
