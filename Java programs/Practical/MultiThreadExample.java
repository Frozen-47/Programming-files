package Practical;

class TableThread extends Thread {
    int number;
    TableThread(int number) { this.number = number; }
    public void run() {
        for (int i = 1; i <= 5; i++) {
            System.out.println(number + " x " + i + " = " + (number * i));
            try { Thread.sleep(500); } catch (InterruptedException e) {}
        }
    }
}
public class MultiThreadExample {
    public static void main(String[] args) {
        TableThread t1 = new TableThread(2);
        TableThread t2 = new TableThread(3);
        TableThread t3 = new TableThread(5);
        t1.setPriority(Thread.MIN_PRIORITY);
        t2.setPriority(Thread.NORM_PRIORITY);
        t3.setPriority(Thread.MAX_PRIORITY);
        t1.start();
        t2.start();
        t3.start();
    }
}
