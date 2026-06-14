package byCodeIO.TypesOfInheritance;

public class MultilevelInheritance {
    public static void main(String[] args) {
       GrandFather F = new GrandFather();
       Father S1 = new Father();
       Daugther S2 = new Daugther();
       System.out.println("GrandFather : " + F.Name + F.Surname + "  \"" + F.Gender + "\"");
       System.out.println("Father : "+ S1.Name + S1.Surname+ "  \"" + S1.Gender + "\"");
       System.out.println("Daugther : "+ S2.Name + S2.Surname+ "  \"" + S2.Gender + "\"");
    }
}
class GrandFather{
    String Name = "Fugaku", Surname = "Uchiha";
    char Gender ='M';
}

class Father extends GrandFather{
    String Name = "Sasuke";
}

class Daugther extends Father{
    String Name = "Sarada";
    char Gender = 'F';
}
