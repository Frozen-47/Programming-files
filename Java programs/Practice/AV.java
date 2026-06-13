package Practice;

public class AV {
    public static void main(String[] args) {
        int[] arr = {1, 2, 3, 4, 5, 1, 3};
        int size = arr.length;
        boolean[] check = new boolean[size];  // simplified

        for (int i = 0; i < size; i++) {
            if (check[i]) {
                continue;
            }

            int count = 1;

            for (int j = i + 1; j < size; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    check[j] = true;
                }
            }

            System.out.println(arr[i] + " occurs " + count + " times");
        }
    }
}
