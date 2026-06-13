package Practice;

import java.util.Scanner;
public class Array_copy_RO {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int size = in.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter "+size+" value for array:");
        for (int i = 0; i < size; i++) {
            arr[i]=in.nextInt();
        }
        int[] copy = new int[size];
        int r_count = size;
        for (int i = 0; i < size; i++) {
            r_count--;
            copy[r_count] = arr[i];
        }
        System.out.println("Copied Reverse array:");
        System.out.println("Normal        Reversed");
        for (int i = 0; i < size; i++) {
            System.out.println(arr[i]+"             "+copy[i]);
        }
    }
}
