package byCodeIO;
abstract class Computer{
    void TurnOff(){
        System.out.println("Turning off...");
    }
}
class Hp extends Computer{
    void Brand(){
        System.out.print("Hp ");
    }
}
public class Abstract {
    public static void main(String[] args) {
        Hp c = new Hp();
        c.Brand();
        c.TurnOff();
    }
}
