package drawlamp;

import java.awt.Color;
import javax.swing.JFrame;

public class Lamp {
    public static void main(String[] args) {
        JFrame f = new JFrame();
      
        f.setTitle("Lamp");
     
        MyPanel mp = new MyPanel();
        f.setSize(500,520);
        
        f.setContentPane(mp);
        
        f.setVisible(true);
        
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
    
}
