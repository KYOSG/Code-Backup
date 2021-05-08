/*
Description
输入一个三位正整数，将它反向输出。

Input
3位正整数。

Output
逆置后的正整数。

Sample
Input
123
Output
321
Hint
注意130逆置后是31
 */
import java.util.Scanner;

public class Main
{
    public static void main(String [] args)
    {
        Scanner in = new Scanner(System.in);
        int n=in.nextInt();
        int a=n/100;
        int b=n/10-a*10;
        int c=n-a*100-b*10;
        int d=c*100+b*10+a;

        System.out.printf("%d\n",d);
    }
}