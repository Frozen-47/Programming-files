import java.awt.*;
import java.awt.event.*;

public class MouseEventsDemo extends Frame implements MouseListener {
    Label l;

    MouseEventsDemo() {
        setLayout(null);
        setTitle("Mouse Events Demo");

        l = new Label("Perform a mouse action...", Label.CENTER);
        l.setBounds(100, 80, 200, 30);
        add(l);

        addMouseListener(this);
        setSize(400, 200);
        setVisible(true);
    }

    public void mouseClicked(MouseEvent e)  { l.setText("Mouse Clicked"); }
    public void mousePressed(MouseEvent e)  { l.setText("Mouse Pressed"); }
    public void mouseReleased(MouseEvent e) { l.setText("Mouse Released"); }
    public void mouseEntered(MouseEvent e)  { l.setText("Mouse Entered"); }
    public void mouseExited(MouseEvent e)   { l.setText("Mouse Exited"); }

    public static void main(String[] args) {
        new MouseEventsDemo();
    }
}
