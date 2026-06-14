
    import java.util.Scanner;

    public class Array_large {
        public static void main(String[] args) {
            Scanner input = new Scanner(System.in);
            System.out.print("Enter the number of elements: ");
            int size = input.nextInt();

            int[] arr = new int[size];

            System.out.println("Enter " + size + " elements:");
            for (int i = 0; i < size; i++) {
                System.out.print("Element " + (i + 1) + ": ");
                arr[i] = input.nextInt();
            }

            int max = arr[0];
            for (int i = 1; i < size; i++) {
                if (arr[i] > max) {
                    max = arr[i];
                }
            }

            System.out.println("\nThe largest number is: " + max);
            input.close();
        }
    }


