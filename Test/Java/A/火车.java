import java.util.Scanner;

public class Main
{
    public static void main(String [] args)
    {
        int T,n,a,b;
        int max,temp;
        Scanner in =new Scanner(System.in);
        T=in.nextInt();

        while(T!=0)
        {
            max=0;
            temp=0;
            n=in.nextInt();
            while(n!=0)
            {
                a=in.nextInt();
                b=in.nextInt();
                temp=temp-a+b;
                if(max<temp)
                    max=temp;
                n--;
            }
            System.out.println(max);
            System.out.println();
            T--;
        }
    }
}
