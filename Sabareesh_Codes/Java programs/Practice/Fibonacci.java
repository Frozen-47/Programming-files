package Practice;
import java.util.Scanner;

public class Fibonacci {
    static void Block(long n,long a ,long b){
        if(n == 0)
            return;
        else{
            System.out.println(a);
            Block(n-1,b,a+b);
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("Fibonacci Series upto :");
        long n = in.nextLong();
        Block(n,0,1);
    }
}
