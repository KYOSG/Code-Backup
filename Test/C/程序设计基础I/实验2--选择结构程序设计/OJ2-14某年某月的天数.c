/*
 Description
 输入三个整数a,b,c。并进行两两相加，最后比较相加和的最大值。
 Input
 输入数据包含三个整数，用空格分开。
 Output
 输出两两相加后的最大值。
 Sample
 Input
 1 2 3
 Output
 5
 */
#include<stdio.h>
#include<stdlib.h>
 
int main()
{
int y,m,d;
scanf("%d\\%d",&y,&m);//输入\时用\\转义
switch(m)
{
case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:d=31;break;
case 4:
case 6:
case 9:
case 11:d=30;break;
case 2:
if((y%4==0&&y%100!=0)||(y%400==0))
d=29;
else
d=28;
}
printf("%d\n",d);
return 0;
}
