package Practice;
import java.util.Scanner;

public class LinearSearch {
    public static void main(String[] args) {
        int found = 0;
        System.out.print("Enter the Size of the array: ");
        Scanner input = new Scanner(System.in) ;
        int n = input.nextInt();
        int[] array = new int [n];
        for (int i = 0; i < n; i++) {
            array[i] = input.nextInt();
        }
        System.out.print("Enter the element to search : ");
        int search = input.nextInt();
        for (int i = 0; i < n; i++) {
            if(array[i] == search){
                System.out.println("Found at : "+ i + " index");
                found++;
                break;
            }
        }
        if(found == 0)
            System.out.println("Element not found");
    }
}
