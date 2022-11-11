package newthread;

import java.awt.Color;
import javax.swing.JFrame;

public class TextMarquee {
    public static void main(String[] args) 
    {
        JFrame f = new JFrame();

        f.setTitle("Welcome -- Version 3.0");
        
        MyPanel mp = new MyPanel();
        f.setContentPane(mp);
        
        f.setSize(300,300);
        
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    } 
}
