package Practice;
public class SimpleMath {
    public static void main(String[] args) {
        int a = 10;
        int b = 3;


        System.out.println("Addition: " + (a + b));


        System.out.println("Subtraction: " + (a - b));


        System.out.println("Multiplication: " + (a * b));


        System.out.println("Division: " + (a / b));


        System.out.println("Modulus: " + (a % b));


        System.out.println("Square root of " + a + " is " + Math.sqrt(a));

        int n =27;

        System.out.println("Cube root of " + a + " is " + Math.cbrt(n));


        System.out.println(a + " raised to " + b + " is " + Math.pow(a, b));

        System.out.println("Max value : " + Math.max(a, b));


        System.out.println("Min value : " + Math.min(a, b));


        int negative = -25;
        System.out.println("Absolute value of " + negative + " is " + Math.abs(negative));


        System.out.println("Random number between 0 and 1: " + Math.random());
        System.out.println('"' + "Hello World" + '"');
    }
}
