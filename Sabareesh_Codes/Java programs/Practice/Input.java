package Practice;
import java.util.Scanner;

public class Input {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter a Integer : ");
        int a = input.nextInt();
        System.out.print("Enter a Short : ");
        short b = input.nextShort();
        System.out.print("Enter a Float : ");
        float c = input.nextFloat();
        System.out.print("Enter a Double : ");
        double d = input.nextDouble();
        input.nextLine();
        System.out.print("Enter a String : ");
        String e = input.nextLine();
        System.out.print("Enter a Character : ");
        char f = input.next().charAt(0);
        input.nextLine();
        System.out.println("The Integer is : "+a);
        System.out.println("The Short is : "+b);
        System.out.println("The Float is : "+c);
        System.out.println("The Double is : "+d);
        System.out.println("The String is : "+e);
        System.out.println("The Character is : "+f);
    }
}
