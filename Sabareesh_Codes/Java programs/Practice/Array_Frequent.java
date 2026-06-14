package Practice;
import java.util.Scanner;
public class Array_Frequent {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int size = in.nextInt();
        int[] arr = new int[size];
        Boolean[] check = new  Boolean[size];
        System.out.println("Enter " + size + " value for array:");
        for (int i = 0; i < size; i++) {
            arr[i] = in.nextInt();
            check[i]=false;
        }
        for (int i = 0; i <size ; i++) {
            if(check[i]){
                continue;
            }
            int count = 1;
            for (int j = i+1; j < size; j++) {
                if(arr[i]==arr[j]){
                    count++;
                check[j]=true;
                }
            }
            System.out.println(arr[i] + " occurs " + count + " times");
        }
    }
}
