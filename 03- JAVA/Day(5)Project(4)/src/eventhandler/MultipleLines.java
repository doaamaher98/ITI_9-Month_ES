package eventhandler;

import javax.swing.JFrame;

public class MultipleLines 
{
    public static void main(String[] args) {
            JFrame f = new JFrame();

            f.setTitle("Multiple Lines Listner");

            MyPanel mp = new MyPanel();
            f.setSize(500,500);

            f.setContentPane(mp);

            f.setVisible(true);
            f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
    
}
