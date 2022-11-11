package drawlamp;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.Graphics2D;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JPanel;

class MyPanel extends JPanel implements Runnable
{
    public int x=30;
    public int y=10;
    
    // X and Y Directions I and J
    public int i=30;
    public int j=30;
    
    public MyPanel() {
        this.setBackground(Color.cyan);
        // Taking an object from thread class
        Thread th = new Thread(this);
        // Calling start
        th.start();
    }
    
    @Override
    public void paintComponent(Graphics g) 
    {
        super.paintComponent(g);
        Graphics2D g2d = (Graphics2D) g;

        // RIGHT Oval
        g2d.setColor(new Color(255, 0, 0));
        g2d.fillOval(x, y, 50, 50);
        g2d.setColor(Color.black);
        g2d.drawOval(x, y, 50, 50);
    }

    @Override
    public void run()
    {
        while (true)
        {
            this.repaint();             // Deletes what was before
            // Exception Handling           
            try 
            {
                x+=i;
                y+=j;
                
                if (x<=0)
                {
                    i = (-1) *i;
                }
                if (x>=320)
                {
                    i = (-1) *i;
                    j-=10;
                }
                if (y<=0)
                {
                    j = (-1) *j;
                }
                if (y>=320)
                {
                    j = (-1) *j;
                    i-=10;
                }
                Thread.sleep(50);
            } 
            catch (InterruptedException ex) {
                Logger.getLogger(MyPanel.class.getName()).log(Level.SEVERE, null, ex);
            }
        }
    }
}