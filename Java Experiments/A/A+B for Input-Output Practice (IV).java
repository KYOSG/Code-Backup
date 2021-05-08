import java.util.*;

public class Main
{
    public static void main(String [] args)
    {
        Scanner Data = new Scanner(System.in);

        int n,a;
        int sum;
        while(true)
        {
            sum=0;
            n=Data.nextInt();
            if(n==0)
                break;

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
