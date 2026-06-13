import java.util.Scanner;

public class Array_calc {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter size of the array: ");
        int size = in.nextInt();
        int[] arr = new int[size];
        int sum =  0;
        System.out.println("Enter "+size+" value for array:");
        for (int i = 0; i < size; i++) {
            arr[i]=in.nextInt();
            sum+=arr[i];
        }
        double avg =(double) sum / size;
        System.out.println("The sum of the array values is  : "+sum);
        System.out.println("The average of the array values is  : "+avg);
    }
}
