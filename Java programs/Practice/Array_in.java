package Practice;

import java.util.Scanner;

public class Array_in {
    public static void main(String[] args) {
        //Normal
        int[] def = {1,2,3,4,5,6};
        //user input
        Scanner input = new Scanner(System.in);
        int[] arr = new int[10];
        for(int i = 0 ; i < 10 ; i++) {
          arr[i]=input.nextInt();
        }
        for (int i = 0; i < 6; i++) {
            System.out.print(def[i]+" ");
        }
        for (int i = 0; i <  10; i++) {
            System.out.println(arr[i]+" ");
        }

    }
}

