package byCodeIO;

public class StaticKeyword {
    public static void main(String[] args) {
        Hello.greet("Sabareesh");
    }
}
class Hello{
    static void  greet(String name){
        System.out.println("Hello, "+name);
    }
}