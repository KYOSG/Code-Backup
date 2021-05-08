/*
 Description
  

 LeiQ当上了体育委员，现在老师让他去给班级里的人排队，LeiQ刚学了排序，所以他想以这种方式给班级里的人排队（从矮到高），他想知道排序完成后的结果。

 Input
  多组输入，每组的第一行是一个正数n（1<=n<=100）,第二行是n个数，表示每一个人的高度。

  

 Output
 输出排序完成后的结果。

 Sample
 Input
 3
 176 175 174
 Output
 174 175 176
 */
#include<stdio.h>
void f(int *p,int n);
int main()
{
    int n,m,i=0,j=0;
    int a[100];
    int *p;


    while(~scanf("%d",&n))
    {
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        p=a;
        f(p,n);
        for(i=0;i<n;i++)
        {
            if (i==0)
                printf("%d",a[0]);
            else
              printf(" %d",a[i]);
        }
        printf("\n");
    }


    return 0;
}
void f(int *p,int n)
{
    int t,i,j;

    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if (*(p+i)>*(p+j))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
}
