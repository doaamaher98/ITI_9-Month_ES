package newthread;

import java.awt.Color;
import java.awt.Graphics;

import java.util.logging.Level;
import java.util.logging.Logger;
import javax.swing.JPanel;

class MyPanel extends JPanel implements Runnable
{
    public int i=0;
    
    public MyPanel() {
        this.setBackground(Color.yellow);
        // Taking an object from thread class
        Thread th = new Thread(this);
        // Calling start
        th.start();
        i=50;
    }
    
    @Override
    public void paintComponent(Graphics g) 
    {
        super.paintComponent(g);
       
        if(i >= this.getWidth())
        {
            i = 0;
        }
        g.drawString("Java", i, 100);
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
                Thread.sleep(300);
                i+=10;
            } 
            catch (InterruptedException ex) {
                Logger.getLogger(MyPanel.class.getName()).log(Level.SEVERE, null, ex);
            }
           // MyPanel.class.getName();
        }
    }
}