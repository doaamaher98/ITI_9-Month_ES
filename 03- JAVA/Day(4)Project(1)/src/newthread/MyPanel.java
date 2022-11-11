package newthread;

import java.awt.Color;
import java.awt.Graphics;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JPanel;

class MyPanel extends JPanel implements Runnable
{
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
        g.drawString(new Date().toLocaleString(), 100, 100);
    }
    
    @Override
    public void run()
    {
        while (true)
        {
            this.repaint();
            // Exception Handling
            try 
            {
                Thread.sleep(1000);
            } 
            catch (InterruptedException ex) {
                Logger.getLogger(MyPanel.class.getName()).log(Level.SEVERE, null, ex);
            }
            MyPanel.class.getName();
        
        }
    
    
    }
    
}