package eventhandler;

import java.awt.Color;
import java.awt.Graphics;

import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;

import javax.swing.JPanel;

/* Create a frame that allows the user to draw one line by
dragging the mouse on the frame */

class MyPanel extends JPanel
{
    int x1;
    int y1;
    int x2;
    int y2;
    
    public MyPanel()
    {
        this.setFocusable(true);
        this.setBackground(Color.CYAN);
        
        this.addMouseListener(new MouseListener()
            {

            @Override
            public void mouseClicked(MouseEvent e)
            {
            }

            @Override
            public void mousePressed(MouseEvent e)
            {
                x1=e.getX(); 
                y1=e.getY(); 
            }

            @Override
            public void mouseReleased(MouseEvent e) 
            {
                x2=e.getX(); 
                y2=e.getY();
            }

            @Override
            public void mouseEntered(MouseEvent e) {
            }

            @Override
            public void mouseExited(MouseEvent e) {
            }
                    
            });
        
        this.addMouseMotionListener(new MouseMotionListener()
                {
                @Override
                    public void mouseMoved (MouseEvent e)
                    {
                    }

                @Override
                    public void mouseDragged(MouseEvent e) 
                    {
                        x2=e.getX(); 
                        y2=e.getY(); 
                        updateUI();
                    }
                });
        
    }
 
    @Override
    public void paintComponent(Graphics g)
    {
      super.paintComponent(g);
      g.drawLine(x1, y1,x2,y2);

    }    
}
