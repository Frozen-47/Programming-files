package Practice;

import java.util.Scanner;

public class Array_rev {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the size of the array : ");
        int size = input.nextInt();
        int[] arr = new int[size];
        int[] rev = new int[size];
        System.out.println("Enter "+size+" Value to the array : ");
        for (int i = 0; i < size; i++) {
            arr[i] = input.nextInt();
        }
        int opp = 0;
        for (int i = size-1; i >= 0; i--) {
            rev[opp++] = arr[i];
        }
        System.out.print("Original array : ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.print("\nReversed array : ");
        for (int i = 0; i < size; i++) {
            System.out.print(rev[i]+" ");
        }
        input.close();
    }
}
