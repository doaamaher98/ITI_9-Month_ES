package eventhandler;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.List;

import java.awt.event.MouseEvent;
import java.awt.event.MouseListener;
import java.awt.event.MouseMotionListener;
import java.util.ArrayList;
import java.util.Vector;

import javax.swing.JPanel;

/* Create a frame that allows the user to draw one line by
dragging the mouse on the frame */

class MyPanel extends JPanel
{
    int x1;
    int y1;
    
    int x2;
    int y2;
    
    // Vector array of class Line created
    Vector<Line> vec = new Vector<Line>();

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
                // In Mouse release, an object is created from Line class and 4 points are passed
                Line add_Line = new Line(x1,y1,x2,y2);
                // Adding this object into the Vector array
                vec.add(add_Line);
                // Updating the UI
                updateUI();
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
      int i;
      
      for (i=0; i<vec.size() ; i++)
      {
          g.drawLine(vec.get(i).x1,vec.get(i).y1,vec.get(i).x2,vec.get(i).y2);
      }
    }    
}

class Line 
{
    int x1; int y1;
    int x2; int y2;
    
    
    Line(int x11 , int y11, int x22, int y22)  
    {
        x1 = x11;
        y1 = y11;
        
        x2 = x22;
        y2 = y22;
    }
}


