package byCodeIO;
class Animal{
    int leg = 4;
    void Eat(){
        System.out.println("I'm Eating");
    }
}
class Dog extends Animal{
    int leg = 3;
    void Bark(){
        System.out.println("I'm Barking");
    }
    void Eat(){
        System.out.println("I'm Eatings");
    }
}
public class MethodOverriding {
    public static void main(String[] args) {
        Dog obj = new Dog();
        
        obj.Bark();
         System.out.println("No of Legs : "+obj.leg);
        obj.Eat();
    }
}