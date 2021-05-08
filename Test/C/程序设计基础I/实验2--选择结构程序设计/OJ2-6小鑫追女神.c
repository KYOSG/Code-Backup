/*
 Description
 小鑫长得比较丑，但还是对女神垂涎不止，小鑫向女神表白了。女神毕竟是女神，女神的世界里，只有0和1。0代表女神拒绝了他，1代表女神接受了他。现在你需要判断女神到底是接受了他还是拒绝了他。若接受，输出“I like you”（不包括引号），若拒绝，输出“He he”（不包括引号）。

 Input
 单组输入。
  输入只有一个数，保证只有0或1。
 Output
  输出女神对小鑫的态度，“I like you”（不包括引号）或“He he”（不包括引号）
 Sample
 Input
 0
 Output
 He he
 Hint

 */
#include<stdio.h>
int main()
{
    int a;
    
    scanf("%d", &a);
    
    if (a == 1)
        printf("I like you\n");
    else if (a == 0)
        printf("He he\n");
    
    return 0;
    
}
