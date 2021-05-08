import java.util.*;

public class Main
{
    public static void main(String [] args)
    {
        Scanner Data = new Scanner(System.in);

        int n, a;
        int sum;

        int N;

        N=Data.nextInt();

        while(N!=0)
        {
            sum=0;
            n=Data.nextInt();
            while(n!=0)
            {
                a=Data.nextInt();
                sum+=a;
                n--;
            }
            System.out.printf("%d\n",sum);
            N--;
        }
    }
}
