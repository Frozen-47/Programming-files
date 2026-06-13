package Practice;
import java.util.Scanner;

public class Array_Element {
    public static void main(String[] args) {
        int[] Arr = new int[10];
        System.out.println("Enter 10 values for array:");
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < 10; i++) {
            Arr[i] = input.nextInt();
        }
        System.out.println("Enter array Element to Search Index:");
        int search = input.nextInt();
        boolean found = false;
        for (int i = 0; i < 10; i++) {
            if ((Arr[i]-search)==0){
                System.out.println("The index of the given element is "+ i);
                found = true;
                break;
            }
        }
        if (!found){
            System.out.println("Your element is not in the array");
        }
    }
}
