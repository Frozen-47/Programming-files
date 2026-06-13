package Practical;

interface Printable {
    abstract void print();
}

interface Showable {
    abstract void show();
}

class MultipleInheritanceExample implements Printable, Showable {
    public void print() {
        System.out.println("Printing...");
    }

    public void show() {
        System.out.println("Showing...");
    }
    public static void main(String[] args) {
        MultipleInheritanceExample obj = new MultipleInheritanceExample();
        obj.print();
        obj.show();
    }
}



