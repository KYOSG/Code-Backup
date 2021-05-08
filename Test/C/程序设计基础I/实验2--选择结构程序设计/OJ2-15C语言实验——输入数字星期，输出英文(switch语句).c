/*
 Description

 从键盘上输入数字星期，然后输出它的英文。
 其对应关系是：
 1 Monday
 2 Tuesday
 3 Wednesday
 4 Thursday
 5 Friday
 6 Saturday
 7 Sunday
 Input

 从键盘输入数字星期，输入数字在1-7之间。
 Output

 输出该数字对应的英文星期表示。
 Sample

 Input

 2
 Output

 Tuesday
 */
#include <stdio.h>
int main ()
{
    int nu;
    
    scanf("%d", &nu);
    
    switch (nu)
    {
        case 1:
            printf("Monday");
            break;
            
        case 2:
            printf("Tuesday");
            break;
            
        case 3:
            printf("Wednesday");
            break;
            
        case 4:
            printf("Thursday");
            break;
            
        case 5:
            printf("Friday");
            break;
            
        case 6:
            printf("Saturday");
            break;
            
       case 7:
            printf("Sunday");
            break;
            
        default:
            break;
    }
    
    return 0;
    
}
