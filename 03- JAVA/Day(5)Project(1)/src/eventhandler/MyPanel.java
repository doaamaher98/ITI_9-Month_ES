package eventhandler;

import java.awt.Color;
import java.awt.Graphics;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import javax.swing.JButton;
import javax.swing.JPanel;

class MyPanel extends JPanel
{
    int x; 
    JButton b1,b2;
    public MyPanel() 
    {
        this.setBackground(Color.cyan); 
        x =0;
        b1 = new JButton("Increment");
        b2 = new JButton("Decrement");
        ///////////////////////////////////////////////////
        // Using Anonymous Inner Class
        b1.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {   
                x++;
                updateUI();
               // throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        this.add(b1);
        ///////////////////////////////////////////////////
        // Using Anonymous Inner Class
        b2.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent e) {   
                x--;
                updateUI();
               // throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
            }
        });
        this.add(b2);
}
    @Override
    public void paintComponent(Graphics g) 
    {
        super.paintComponent(g);
        if (x> 10)
        {
            x=0;
        }
        g.drawString("X = "+ x, 250, 250);
        g.drawString("X = "+ x, 250, 250);
    }
}
