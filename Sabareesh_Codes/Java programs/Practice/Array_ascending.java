
package Practice;
import java.util.Scanner;

public class Array_ascending {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int size = in.nextInt();
        int[] arr = new int[size];
        System.out.println("Enter "+size+" value for array:");
        for (int i = 0; i < size; i++) {
            arr[i]=in.nextInt();
        }
        for (int i = 0; i < size; i++) {
            for (int j = i+1; j < size; j++) {
                if(arr[i]>arr[j]){
                    int temp = arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }


        System.out.print("Ascending ordered array : ");
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i]+" ");
        }
        in.close();
    }
}
