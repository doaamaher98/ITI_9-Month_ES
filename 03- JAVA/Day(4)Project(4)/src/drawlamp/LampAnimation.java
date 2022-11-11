package drawlamp;

import javax.swing.JFrame;

public class LampAnimation {
    public static void main(String[] args) {
        JFrame f = new JFrame();
      
        f.setTitle("Lamp Animation");
     
        MyPanel mp = new MyPanel();
        f.setSize(500,520);
        
        f.setContentPane(mp);
        
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
