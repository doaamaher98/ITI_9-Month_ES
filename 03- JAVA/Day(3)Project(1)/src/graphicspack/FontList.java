package graphicspack;

import java.awt.Color;
import java.awt.Font;
import java.awt.Graphics;
import javax.swing.JPanel;

import java.awt.GraphicsEnvironment;
import java.awt.Toolkit;

public class FontList extends JPanel{
    
    @Override
    public void paint (Graphics g)
    {
        String[] fam;
        //fam = GraphicsEnvironment.getLocalGraphicsEnvironment().getAvailableFontFamilyNames();
        fam = Toolkit.getDefaultToolkit().getFontList();
        for (int i=0; i<fam.length ; i++)
        {
            Font font = new Font(fam[i] ,Font.BOLD, 14);
            g.setFont(font);
            g.setColor(Color.black);
            
            String Name = "Doaa Maher" + "    " + fam[i];
            g.drawString(Name, 0, (i*2+3) * 8);
        }
    
    }
    
    
}
