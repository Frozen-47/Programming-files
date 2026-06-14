
package Practice;import java.util.Scanner;

public class Array_F_to_L {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int size = in.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter "+size+" value for array:");
        for (int i = 0; i < size; i++) {
            arr[i]=in.nextInt();
        }
        // Swaping First index and Last index
        int temp = arr[0];
        arr[0] = arr[size-1];
        arr[size-1] = temp;

        System.out.print("After Swap First index and Last index : ");

        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
