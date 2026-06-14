package Practical;

import java.applet.Applet;
import java.awt.*;

/*
<applet code="ShapesApplet" width=500 height=400>
</applet>
*/

public class ShapesApplet extends Applet {

    public void paint(Graphics g) {
        g.setColor(Color.BLUE);
        g.drawString("Java Graphics Example", 200, 50);

        g.setColor(Color.RED);
        g.drawLine(50, 100, 200, 100);

        g.setColor(Color.GREEN);
        g.drawRect(50, 150, 100, 60);

        g.setColor(Color.ORANGE);
        g.fillRect(200, 150, 100, 60);

        g.setColor(Color.MAGENTA);
        g.drawOval(50, 250, 100, 60);

        g.setColor(Color.CYAN);
        g.fillOval(200, 250, 100, 60);

        g.setColor(Color.PINK);
        g.drawRoundRect(350, 150, 100, 60, 30, 30);

        g.setColor(Color.YELLOW);
        g.fillRoundRect(350, 250, 100, 60, 30, 30);
    }
}
