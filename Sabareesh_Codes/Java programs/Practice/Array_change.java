package Practice;
public class Array_change {
    public static void main(String[] args) {
        int[] arr = {1,2,3,4,5,5};
        arr[5] = 6;
        for (int i = 0; i < 6; i++) {
            System.out.print(arr[i]+" ");
        }
    }
}
