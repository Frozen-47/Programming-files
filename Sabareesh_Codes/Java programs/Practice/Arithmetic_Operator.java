package Practice;
import java.util.*;

public class Arithmetic_Operator {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter A value: ");
        int a = in.nextInt();
        System.out.print("Enter B value: ");
        int b = in.nextInt();
        int o;

        do {
            System.out.print("\n1) Addition\n2) Subtraction\n3) Multiplication\n4) Division\n5) Modulus\n0) Exit\nEnter Operation: ");
            o = in.nextInt();

            switch (o) {
                case 1:
                    add(a, b);
                    break;
                case 2:
                    sub(a, b);
                    break;
                case 3:
                    mul(a, b);
                    break;
                case 4:
                    div(a, b);
                    break;
                case 5:
                    mod(a, b);
                    break;
                case 0:
                    System.out.println("Exiting....");
                    System.exit(0);
                default:
                    System.out.println("Please enter valid operation...");
            }
        } while (o != -1);
    }

    public static void add(int a, int b) {
        System.out.println("The Sum is : " + (a + b));
    }

    public static void sub(int a, int b) {
        System.out.println("The Difference is : " + (a - b));
    }

    public static void mul(int a, int b) {
        System.out.println("The Product is : " + (a * b));
    }

    public static void div(int a, int b) {
        if (b != 0) {
            System.out.println("The division is : " + (a / b));
        } else {
            System.out.println("Division is not allowed to zero");
        }
    }

    public static void mod(int a, int b) {
        System.out.println("The remainder is : " + (a % b));
    }
}
