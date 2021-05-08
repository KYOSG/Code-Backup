/*
Input
Input contains an integer N in the first line, and then N lines follow. Each line starts with a integer M, and then M integers follow in the same line
Output
For each group of input integers you should output their sum in one line, and you must note that there is a blank line between outputs.
Sample
Input
3
4 1 2 3 4
5 1 2 3 4 5
3 1 2 3
Output
10

15

6
 */

import java.util.Scanner;

public class Main
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);

        int N;
        N = in.nextInt();

        int M;
        int sum;
        int t;

        while(N>0)
        {
            sum=0;
            M=in.nextInt();
            while(M>0)
            {
                t=in.nextInt();
                sum+=t;
                M--;
            }
            System.out.printf("%d\n\n",sum);
            N--;
        }


    }
}