 /*
  
  Description

  输入一个整数，请你按如下要求输出：

  第一行按原样输出，

  第二行以十六进制输出（字母小写），

  第三行以十六进制输出（字母大写）。
  Input

  一个int范围内的正整数 a 。
  Output

  共三行，按题目描述输出。
  Sample

  Input

  456
  Output

  456
  1c8
  1C8
  
  */
 #include<stdio.h>
 int main()
 {
     int a;
     
     scanf("%d",&a);
     
     printf("%d\n",a);
     printf("%x\n",a);
     printf("%X\n",a);
     
     return 0;
     
 }

