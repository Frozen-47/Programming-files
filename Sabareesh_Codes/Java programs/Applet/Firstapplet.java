package Applet;
import java.applet.Applet;
import java.awt.Graphics;

/*
<applet code="HelloApplet.class" width="300" height="200">
</applet>
*/

public class Firstapplet extends Applet {

    @Override
    public void paint(Graphics g) {
        g.drawString("Hello, this is my first Java Applet!", 50, 100);
    }
}
