package graphicspack;

import java.awt.Color;
import java.awt.Graphics;
import java.util.Date;
import javax.swing.JPanel;

class MyPanel extends JPanel
{
    public MyPanel() {
        this.setBackground(Color.cyan);
    }
    @Override
    public void paintComponent(Graphics g) 
    {
        super.paintComponent(g);
        //g.drawString(new Date().toLocaleString(), 100, 100);
    
    }
}