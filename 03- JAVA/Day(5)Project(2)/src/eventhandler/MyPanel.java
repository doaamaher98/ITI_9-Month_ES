package eventhandler;

import java.awt.Color;
import java.awt.Graphics;

import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

import javax.swing.JPanel;

/* Create a frame that displays string which user can move
it using arrow keys */ 
class MyPanel extends JPanel
{ 
    int keycode;
    int x,y;
    public MyPanel() 
    {
        keycode=0;
        x=10;y=50;
        
        this.setFocusable(true);
        this.setBackground(Color.cyan); 
        
        this.addKeyListener(new KeyListener() {
            @Override
            public void keyTyped(KeyEvent e) {
                //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }

            @Override
            public void keyPressed(KeyEvent e) {
               // throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
               keycode = e.getKeyCode();
                System.out.println(keycode);
                /* Switching */
                switch(keycode)
                {
                    case 39:
                        x+=10;    //UP
                        break;
                    case 37:
                        x-=10;   // DOWN
                        break;
                    case 38:
                        y-=10;  // RIGHT
                        break;
                    case 40:
                        y+=10;  // LEFT
                        break;                
                }
                
               updateUI();
            }

            @Override
            public void keyReleased(KeyEvent e) {
              //  throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });        
}
    @Override
    public void paintComponent(Graphics g) 
    {
        super.paintComponent(g);
        
        if (x>=this.getWidth())
        {
            x=10;
        }
        
        if (y>=this.getWidth() )
        {
            y=50;
        }
        g.drawString("Java", x, y);
    }
}
