package graphicspack;

import java.awt.Color;
import javax.swing.JFrame;

public class GUI
{
    public static void main(String[] args)
    {
        JFrame f = new JFrame();
        f.setBackground(Color.cyan);
        
        f.setTitle("Welcome -- Version 1.0");
        
        MyPanel mp = new MyPanel();
        //f.setContentPane(mp);
        f.setSize(400,400);
        
        FontList f1 = new FontList();
        f.setContentPane(f1);
    
        f.setVisible(true);
    }
    
}
