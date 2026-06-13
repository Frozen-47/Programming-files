package byCodeIO.TypesOfInheritance;

public class HierarchicalInheritance {
    public static void main(String[] args) {
        GrandDad F = new GrandDad();
        Mother S1 = new Mother();
        Aunty S2 = new Aunty();
        System.out.println("GrandDad : "+ "  \"" + F.Gender + "\"");
        System.out.println("Mother : "+"  \"" + S1.Gender + "\"");
        System.out.println("Aunty : "+"  \"" + S2.Gender + "\"");
    }
}
class GrandDad{

    char Gender ='M';
}

class Mother  extends GrandDad{
    char Gender ='F';
}

class Aunty extends GrandDad{

    char Gender = 'F';
}
