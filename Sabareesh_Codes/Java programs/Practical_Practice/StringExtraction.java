package Practical_Practice;
import java.util.*;
public class StringExtraction {
   public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the Original string : ");
        String Original = input.nextLine();
        System.out.print("Enter the Starting index : ");
        int start = input.nextInt();
        System.out.print("Enter the Ending index : ");
        int end = input.nextInt();
        if(start < 0 || end > Original.length() || start >= end){
            System.out.println("Invalid Indies.");
        }
        else {
            String Extracted = Original.substring(start,end);
            System.out.println("Original String : "+Original);
            System.out.println("Extracted String : "+Extracted);
        }
    }
}