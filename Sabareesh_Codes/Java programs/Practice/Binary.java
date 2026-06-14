package Practice;

import java.util.Scanner;

public class Binary {
    public static void main(String[] args) {

        System.out.print("Enter the Size of the array: ");
        Scanner input = new Scanner(System.in) ;
        int n = input.nextInt();
        int front = 0;
        int back = n-1;

        int[] array = new int [n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }

    }
}
