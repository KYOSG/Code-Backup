/*
 Description

 Your task is to Calculate a + b.
 Input

 Your task is to Calculate a + b.
 Output

 For each pair of input integers a and b you should output the sum of a and b in one line, and with one line of output for each line in input.
 Sample

 Input

 2
 1 5
 10 20
 Output

 6
 30
 */
#include<stdio.h>
int main()
{
    int a, b, sum, i;
    
    for (scanf("%d", &i); scanf("%d %d", &a, &b)!=EOF; i--)
    {
        sum = a+b;
        printf("%d\n", sum);
    }
    
    
    return 0;
}
