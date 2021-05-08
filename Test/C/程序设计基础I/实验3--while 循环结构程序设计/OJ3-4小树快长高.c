/*
 
 Description

 小明在植树节种了一棵小树，小明非常关心小树，每天都给小树浇水，盼望着小树快快长高。他知道小树现在有 n cm，每天长高k cm，他想知道多少天小树可以长到m cm。
 Input

 输入三个整数  n, m, k。 ( 0 <= n<= 10000, 0 <= m <= 10000,0 <= k <= 10000)
 Output

 输出一个整数，即需要的天数。
 Sample

 Input

 100 200 5
 Output

 20
 
 */

#include <stdio.h>
int main()
{
   int n,m,k,t=0;
   scanf("%d %d %d",&n,&m,&k);
   while(m>n)
   {
       m = m - k;
       t++;
   }
   printf("%d\n",t);
   return 0;
}
