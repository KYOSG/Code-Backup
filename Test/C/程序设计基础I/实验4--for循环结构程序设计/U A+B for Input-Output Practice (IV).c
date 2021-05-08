/*
 Description

 Your task is to Calculate the sum of some integers.
 Input

 Input contains multiple test cases. Each test case contains a integer N, and then N integers follow in the same line. A test case starting with 0 terminates the input and this test case is not to be processed.
 Output

 For each group of input integers you should output their sum in one line, and with one line of output for each line in input.
 Sample

 Input

 4 1 2 3 3
 5 1 2 4 4 5
 0
 Output

 9
 16
 */
#include <stdio.h>

int main()
{
    int n,i,sum,x;
    while(scanf("%d",&n)!=EOF&&n)
    {
        sum=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&x);
            sum=sum+x;
        }
        printf("%d\n",sum);
    }
    return 0;

}
