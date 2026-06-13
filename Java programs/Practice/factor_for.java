
public class factor_for {
    public static void main(String[] args) {


        int n = 10;
        for (int i = 1;i <= n;i++){
            if (n % i == 0){
                System.out.println(i + " is a factor");
            }
            else {
                System.out.println(i + " is not a factor");
            }
        }

    }
}
