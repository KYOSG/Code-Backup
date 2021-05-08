/*
 Description

 24 小时制的时间格式为 "HH:mm"，如 “05:20”，而 12 小时制的时间格式为 "h:mm AM/PM"，如 "5:20 AM"。

 24 小时制到 12 小时制的对应关系如下：

 0 时：12 时 (AM)
 1~11 时：1~11 时 (AM)
 12 时：12 时 (PM)
 13~23 时：1~11 时 (PM)
 例如："00:00" 对应 "12:00 AM"，"01:20" 对应 "1:20 AM"，"12:35" 对应 "12:35 PM"，"13:17" 对应 "1:17 PM"，"23:59" 对应 "11:59 PM"。

  

 现在给你一个 24 小时制的时间，请你编写程序将其转换为 12 小时制的时间。
 Input

 输入只有一行，包含一个 24 小时制的时间。
 Output

 输出一行，表示转换为 12 小时制以后的时间。其中分钟部分若不足两位需要加 0 补足两位。
 Sample

 Input

 00:05
 Output

 12:05 AM
 Hint

 输入部分可以使用 scanf("%d:%d") 读入；输出的数字部分可以使用 printf("%d:%02d") 输出。
 */
#include<stdio.h>
int main ()
{
    int h1, m1;
    
    int h2;
    
    scanf("%d:%02d", &h1, &m1);
    
    h2 = h1 - 12;
    
    if (h1 == 12)
        printf("%d:%02d PM\n", h1, m1);
    else if (h1 == 0)
        printf("%d:%02d AM\n", -h2, m1);
    else
    {
        if (h2 < 0)
            printf("%2d:%02d AM\n", h1, m1);
        
        else
            printf("%2d:%02d PM\n", h2, m1);
    }
        
    return 0;
}
