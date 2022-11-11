package drawlamp;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import javax.swing.JPanel;

class MyPanel extends JPanel
{
    public MyPanel() 
    {
        this.setBackground(Color.white);
        
    }
    @Override
    public void paintComponent(Graphics g) 
    {
        super.paintComponent(g);
        
        Graphics2D g2d = (Graphics2D) g;

        g2d.setColor(new Color(255, 204, 229));
        g2d.fillOval(80, 10, 200, 80);
        g2d.setColor(Color.black);
        g2d.drawOval(80, 10, 200, 80);
        
        g2d.setColor(new Color(255, 204, 229));
        g2d.fillOval(125, 100, 110, 140);
        g2d.setColor(Color.black);
        g2d.drawOval(125, 100, 110, 140);
        
        g2d.setColor(new Color(255, 204, 229));
        g2d.fillOval(60, 120, 60, 50);
        g2d.setColor(Color.black);
        g2d.drawOval(60, 120, 60, 50);
        
        g2d.setColor(new Color(255, 204, 229));
        g2d.fillOval(240, 120, 60, 50);
        g2d.setColor(Color.black);
        g2d.drawOval(240, 120, 60, 50);
        
        
        g2d.setColor(new Color(0, 0, 0));
        g2d.drawLine(81, 40, 30, 250);
        
        g2d.setColor(new Color(0, 0, 0));
        g2d.drawLine(330, 245, 275, 35);
        
        
        g2d.setColor(new Color(0, 0, 0));
        g2d.drawArc(30, 170, 300, 150, 0, -180);
        

        g2d.setColor(new Color(0, 0, 0));
        g2d.drawLine(175, 320, 130, 450);
        
        g2d.setColor(new Color(0, 0, 0));
        g2d.drawLine(185, 320, 220, 450);
       

        g2d.setColor(new Color(192, 192, 192));
        g2d.fillRect(65, 450, 225, 25);
        g2d.setColor(Color.black);
        g2d.drawRect(65, 450, 225, 25);
        
        
    }
}