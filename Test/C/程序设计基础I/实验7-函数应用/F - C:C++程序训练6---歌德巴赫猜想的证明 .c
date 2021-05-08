/*
 Description

 验证“每个不小于6的偶数都是两个素数之和”，输入一个不小于6的偶数n，找出两个素数，使它们的和为n。
 Input

 输入一个不小于6的偶数n。
 Output

 找出两个素数，使它们的和为n。只需要输出其中第一个素数最小的一组数据即可。
 Sample

 Input

 80
 Output

 80=7+73
 */
#include<stdio.h>
#include<math.h>
void f(int n);
int main()
{
    int n;

    scanf("%d",&n);

    f(n);

    return 0;
}
void f(int n)
{
    int i,t,j,f=0;

    for(i=2;i<n;i++)
    {
        f=0;
        for(j=2;j<i;j++)
        {
            if (i%j==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            t = n - i;

            for (j = 2; j < t; j++)
            {
                if (t % j == 0)
                {
                    f = 1;
                    break;
                }
            }
        }

        if (f == 0)
            break;
    }

    printf("%d=%d+%d\n",n,i,t);
}
