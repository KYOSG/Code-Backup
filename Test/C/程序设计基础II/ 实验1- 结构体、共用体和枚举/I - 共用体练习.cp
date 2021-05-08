/*
 Description
  给定n和m，接下来有n个描述，每个描述包含一个类型标志和一组相应的数据。类型标志共3种：INT DOUBLE STRING，然后对应一组相应的数据。紧接着有m个询问，每个询问仅包含一个整数x，要求输出第x个描述对应的数据（STRING类型保证不含空格，每组对应STRING数据不会超过19个字符）。

  

 Input
 输入的第一行为两个整数，n和m (n<=100000, m<=100000），分别代表描述的个数和询问的个数。接下来为 n 行描述，最后为m行询问，具体格式见样例输入输出。

 Output
 对于每个询问，输出对应的结果，注意：浮点数保留两位小数。

 Sample
 Input
 5 4
 INT 456
 DOUBLE 123.56
 DOUBLE 0.476
 STRING welcomeToC
 STRING LemonTree
 0
 1
 2
 4
 Output
 456
 123.56
 0.48
 LemonTree
 Hint
 必须使用共用体完成。
 */
#include <iostream>
#include<cstring>
using namespace std;

union node
{
    int a;
    double b;
    char s[30];
};

char book[112345][30];
int main()
{
    int n, m,k;
    union node q[112345];
    scanf("%d %d", &n, &m);
    int i;
    for(i = 0;i < n;i++)
    {
        scanf("%s", book[i]);
        if(strcmp(book[i],"INT") == 0)
        {
            scanf("%d", &q[i].a);
        }
        else if(strcmp(book[i], "DOUBLE") == 0)
        {
            scanf("%lf", &q[i].b);
        }
        else if(strcmp(book[i],"STRING") == 0)
        {
            scanf("%s", q[i].s);
        }
    }

    for(i = 0;i < m;i++)
    {
        scanf("%d", &k);
        if(strcmp(book[k],"INT")  == 0)
        {
            printf("%d\n", q[k].a);
        }
        else if(strcmp(book[k], "DOUBLE") == 0)
        {
            printf("%.2f\n", q[k].b);
        }
        else if(strcmp(book[k],"STRING") == 0)
        {
            printf("%s\n", q[k].s);
        }
    }


    return 0;
}
