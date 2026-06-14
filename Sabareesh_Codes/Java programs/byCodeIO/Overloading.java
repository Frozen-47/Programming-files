package byCodeIO;
class Greeting{
    void greet(){
        System.out.println("Hello, Nice to meet you");
    }
    void greet(String name){
        System.out.println("Hello "+ name +" ,Nice to meet you");

    }
}
public class Overloading {
    public static void main(String[] args) {
      Greeting obj = new Greeting();
      obj.greet();
      obj.greet("Frozen");
    }
}
