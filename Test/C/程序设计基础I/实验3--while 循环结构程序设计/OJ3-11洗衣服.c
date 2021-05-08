/*
 Description

 X是一个勤劳的小孩，总是会帮助大人做家务。现在他想知道对于一根长为L的绳子能晾开多少件宽为W的衣服，显然这些衣服不能相互叠压。
 Input

  多组输入。
 每组输入两个整数L,W。
 Output

  输出答案。
 Sample

 Input

 10 5
 10 4
 Output

 2
 2
 */
#include <stdio.h>
int main ()
{
    
    int l, w, n;
    
    while (scanf("%d%d", &l, &w) != EOF)
    {
        n = l/w;
        printf("%d\n", n);
    }
    
    return 0;
}
