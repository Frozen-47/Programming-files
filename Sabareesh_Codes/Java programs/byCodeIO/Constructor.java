package byCodeIO;
class Sample{
    String name;
    int group;
  Sample(String name,int group){
      this.name = name;
      this.group = group;
  }
}
public class Constructor {
  public static void main(String[] args) {
      Sample obj = new Sample("Sabareesh",2);
      System.out.println("Name : "+obj.name);
      System.out.println("Group : "+obj.group);
  }
}

