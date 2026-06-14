package Practical;

import java.awt.*;
public class UserDetailsFrame extends Frame {
    UserDetailsFrame() {
        setLayout(new GridLayout(4,2));
        add(new Label("Name:")); add(new TextField());
        add(new Label("Age:")); add(new TextField());
        add(new Label("Qualification:")); add(new TextField());
        add(new Label("Address:")); add(new TextArea(3,20));
        setSize(300,200); setVisible(true);
    }
    public static void main(String[] args) {
        new UserDetailsFrame();
    }
}

