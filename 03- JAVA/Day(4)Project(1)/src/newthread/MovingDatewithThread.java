package newthread;

import java.awt.Color;
import javax.swing.JFrame;

public class MovingDatewithThread {
    public static void main(String[] args) {
       
        JFrame f = new JFrame();
        f.setBackground(Color.cyan);
        
        f.setTitle("Welcome -- Version 2.0");
        
        MyPanel mp = new MyPanel();
        f.setContentPane(mp);
        
        f.setSize(400,300);
        
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
