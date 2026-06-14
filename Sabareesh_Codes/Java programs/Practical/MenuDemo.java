package Practical;

import java.awt.*;
public class MenuDemo extends Frame {
    MenuDemo() {
        MenuBar mb = new MenuBar();
        Menu file = new Menu("File");
        file.add("New"); file.add("Open"); file.add("Exit");
        mb.add(file);
        setMenuBar(mb);
        setSize(500,500); setVisible(true);
    }
    public static void main(String[] args) {
        new MenuDemo();
    }
}

