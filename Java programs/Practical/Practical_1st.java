package Practical;
import java.util.Scanner;
public class Practical_1st {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the original string: ");
        String original = scanner.nextLine();

        System.out.print("Enter the starting index (0-based): ");
        int start = scanner.nextInt();

        System.out.print("Enter the ending index: ");
        int end = scanner.nextInt();

        if (start < 0 || end > original.length() || start >= end) {
            System.out.println("Invalid indices! Please ensure 0 <= start < end <= string length.");
        }
        else {
            // Extract substring
            String extracted = original.substring(start, end);

            System.out.println("Original String: " + original);
            System.out.println("Extracted Substring: " + extracted);
        }

        scanner.close();
    }

}
