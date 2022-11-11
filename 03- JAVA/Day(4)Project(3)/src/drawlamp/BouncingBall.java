package drawlamp;

import javax.swing.JFrame;

public class BouncingBall {
    public static void main(String[] args) {
      
        JFrame f = new JFrame();
      
        f.setTitle("Bouncing Ball Animation");
     
        MyPanel mp = new MyPanel();
        f.setSize(400,400);
        
        f.setContentPane(mp);
        
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
