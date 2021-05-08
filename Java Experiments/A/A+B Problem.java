import java.util.Scanner;

public class Main
{
    public static void main(String [] args)
    {
        Scanner Data = new Scanner(System.in);
        int a,b;
        a=Data.nextInt();
        b= Data.nextInt();
        System.out.printf("%d",a+b);
        Data.close();
    }
}