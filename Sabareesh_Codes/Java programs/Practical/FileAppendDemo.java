package Practical;

import java.io.*;
public class FileAppendDemo {
    public static void main(String[] args) {
        try {
            FileWriter fw = new FileWriter("example.txt", true);
            BufferedWriter bw = new BufferedWriter(fw);
            bw.write("Appending new text.\n");
            bw.close(); fw.close();
            System.out.println("Text appended successfully.");
        } catch(Exception e) {
            System.out.println(e);
        }
    }
}

