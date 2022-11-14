package eventhandler;

import javax.swing.JFrame;

/*Create a frame that has two buttons one to increment the counter value and
one to decrement this value */

public class EventHandling1 {
    public static void main(String[] args) {
        JFrame f = new JFrame();
      
        f.setTitle("Action Listner");
     
        MyPanel mp = new MyPanel();
        f.setSize(500,500);
        
        f.setContentPane(mp);
        
        f.setVisible(true);
        f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
