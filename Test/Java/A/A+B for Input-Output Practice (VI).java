import java.util.Scanner;

public class Main
{
    public static void main(String [] args)
    {
        Scanner Data = new Scanner(System.in);

        int n, a;
        int sum;

        while(Data.hasNextInt())
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
        }
    }
}
