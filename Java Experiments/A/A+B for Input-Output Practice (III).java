import java.util.Scanner;

public class Main
{
    public static void main(String [] args)
    {
        Scanner Data = new Scanner(System.in);

        int n,a,b;

        n=Data.nextInt();
        while(n!=0)
        {
            a=Data.nextInt();
            b=Data.nextInt();

            System.out.printf("%d\n",a+b);
            n--;
        }
    }
}