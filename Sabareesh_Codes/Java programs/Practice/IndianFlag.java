package Practice;
import javax.swing.JFrame;
import java.awt.*;

public class IndianFlag extends JFrame {
    public IndianFlag() {
        setTitle("Indian Flag");
        setSize(500, 500);
        
    }

    public void paint(Graphics g) {
        super.paint(g);

        // Draw saffron band
        g.setColor(Color.ORANGE);
        g.fillRect(80, 70, 150, 30);

        // Draw white band
        g.setColor(Color.WHITE);
        g.fillRect(80, 100, 150, 30);

        // Draw green band
        g.setColor(Color.GREEN);
        g.fillRect(80, 130, 150, 30);

    }

    public static void main(String[] args) {
        new IndianFlag();
    }
}
