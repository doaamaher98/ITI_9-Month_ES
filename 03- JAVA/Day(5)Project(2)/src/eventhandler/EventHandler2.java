package eventhandler;

import javax.swing.JFrame;

public class EventHandler2 {

        public static void main(String[] args) {
            JFrame f = new JFrame();

            f.setTitle("Key Listner");

            MyPanel mp = new MyPanel();
            f.setSize(300,300);

            f.setContentPane(mp);

            f.setVisible(true);
            f.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    }
}
