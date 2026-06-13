package Practice;
import java.util.Scanner;
public class factor_while {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a number to find its factors:");
        int n = input.nextInt();
        int i=1;
        while (i <= n){
            if (n % i == 0){
                System.out.println(i + " is a factor");
            }
            else {
                System.out.println(i + " is not a factor");
            }
            i++;
        }

    }
}
