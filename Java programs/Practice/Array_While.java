package Practice;


import java.util.Scanner;

public class Array_While {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int size = in.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter "+size+" value for array:");
        for (int i = 0; i < size; i++) {
            arr[i]=in.nextInt();
        }
        int i = 0;
        System.out.print("Elements :");
        while(i<size){
            System.out.print(arr[i]+" ");
            i++;
        }

    }
}
