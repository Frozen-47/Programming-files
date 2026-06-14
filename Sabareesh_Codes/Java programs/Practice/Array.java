package Practice;
import java.util.Scanner;

public class Array {
    public static void main(String[] args) {
        int[] Arr = new int[10];
        System.out.println("Enter 10 values for array:");
        Scanner input = new Scanner(System.in);
        for (int i = 0; i < 10; i++) {
            Arr[i]=input.nextInt();
        }



        //  1)Forward Array
        System.out.print("Forward Array : ");
        for (int i = 0; i < 10; i++) {
            System.out.print(Arr[i]+" ");
        }



        //  2)Reversed Array
        System.out.print("\nReversed Array : ");
        for (int i = 9; i >= 0; i--) {
            System.out.print(Arr[i]+" ");
        }
        System.out.print("\n");




        //  3)Searching by index Array element
        System.out.print("Enter index (0 to 9) to search array element:");
        int search = input.nextInt();
        if(search >= 0 && search <= 9){
        System.out.println("The searched element from the arr is : "+Arr[search]);}
        else {
            System.out.println("Please enter a valid input to search");
        }
    }
}
