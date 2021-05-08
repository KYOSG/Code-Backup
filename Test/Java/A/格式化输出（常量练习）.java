/*
Description
用c语言的基本输出格式打印下列内容:
100
A
3.140000

Input
本题目没有输入数据

Output
输出三行数据：
100
A
3.140000

Sample
Output
100
A
3.140000
*/
public class Main
{
    public static void main(String [] args)
    {
        int a=100;
        char c='A';
        double f=3.140000;
        System.out.printf("%d\n",a);
        System.out.printf("%c\n",c);
        System.out.printf("%f\n",f);
    }
}