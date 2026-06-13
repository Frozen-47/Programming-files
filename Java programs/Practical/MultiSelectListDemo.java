package Practical;

import java.awt.*;

public class MultiSelectListDemo extends Frame {
    MultiSelectListDemo() {
        List list = new List(5,true);
        list.add("C"); list.add("C++"); list.add("Java"); list.add("Python"); list.add("C#");
        add(list);
        setSize(300,200); setVisible(true);
    }
    public static void main(String[] args) {
        new MultiSelectListDemo();
    }
}

