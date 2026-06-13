package byCodeIO.TypesOfInheritance;
interface Class1{
    void print();
}
interface Class2{
    void show();
}
class Implement implements Class1,Class2{
    public void print(){
        System.out.println("Printing");
    }
    public void show(){
        System.out.println("Showing");
    }
}
public class MultipleInheritance {
    public static void main(String[] args) {
        Implement i = new Implement();
        i.print();
        i.show();
    }
}
