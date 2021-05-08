/*
Description

输入一个实数，请你按如下要求输出：

第一行按双精度默认输出，

第二行双精度数输出共占 10 位，其中 3 位小数，右对齐，左补空格并在两端添加星号包裹，

第三行双精度数输出共占 10 位，其中 3 位小数，左对齐，右补空格并在两端添加星号包裹。
Input

一个double范围内的正实数 a 。
Output

共三行，按题目描述输出。
Sample

Input

123.56789
Output

123.567890
*   123.568*
*123.568   *
 
*/

#include <stdio.h>
int main()
{
    double a;
    
    scanf("%lf",&a);
    
    printf("%lf\n",a);
    printf("*%10.3lf*\n",a);
    printf("*%-10.3lf*\n",a);
    
    return 0;
}
