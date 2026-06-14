package byCodeIO.TypesOfInheritance;
class Car{
    int Wheel = 4;
    void Drive(){
        System.out.println("Car is in Driving State");
    }
}
class Honda extends Car{
    void Brand(){
        System.out.println("It's Honda");
    }
}
public class SingleInheritance {
    public static void main(String[] args) {
        Honda obj = new Honda();
        obj.Brand();
        System.out.println("No of Wheels : "+obj.Wheel);
        obj.Drive();
    }
}
