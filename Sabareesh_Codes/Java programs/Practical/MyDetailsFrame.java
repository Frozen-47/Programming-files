package Practical;
import java.awt.*;
import java.awt.event.*;
public class MyDetailsFrame extends Frame implements ActionListener {
    TextField name, street, city, pin;
    Button show;
    MyDetailsFrame() {
        setLayout(new GridLayout(5,2));
        add(new Label("Name:")); name = new TextField(); add(name);
        add(new Label("Street:")); street = new TextField(); add(street);
        add(new Label("City:")); city = new TextField(); add(city);
        add(new Label("Pin:")); pin = new TextField(); add(pin);
        show = new Button("My Details"); add(show);
        show.addActionListener(this);
        setSize(300,200); setVisible(true);
    }
    public void actionPerformed(ActionEvent e) {
        name.setText("RamKumar");
        street.setText("Ravi Nagar");
        city.setText("Cuddalore");
        pin.setText("607102");
    }
    public static void main(String[] args) {
        new MyDetailsFrame();
    }
}

