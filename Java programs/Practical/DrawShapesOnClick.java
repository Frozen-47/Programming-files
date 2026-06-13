package Practical;

import java.awt.*;
import java.awt.event.*;
public class DrawShapesOnClick extends Frame implements MouseListener {
    int x=0,y=0; boolean clicked=false;
    DrawShapesOnClick() {
        addMouseListener(this);
        setSize(400,300); setVisible(true);
    }
    public void paint(Graphics g) {
        if(clicked) {
            g.drawOval(x,y,50,50);
            g.drawRect(x+60,y,50,50);
            g.drawOval(x,y+60,80,40);
            g.drawRect(x+100,y+100,80,40);
        }
    }
    public void mouseClicked(MouseEvent e){}
    public void mousePressed(MouseEvent e){} public void mouseReleased(MouseEvent e){x=e.getX(); y=e.getY(); clicked=true; repaint(); }
    public void mouseEntered(MouseEvent e){} public void mouseExited(MouseEvent e){}
    public static void main(String[] args){ new DrawShapesOnClick(); }
}

