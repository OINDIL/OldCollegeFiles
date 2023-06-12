import javax.swing.JFrame;
import javax.swing.JLabel;

import java.awt.Color;

import javax.swing.ImageIcon;
public class RegistrationForm{
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        JLabel l1,l2;
        l1 = new JLabel("Name");
        l1.setBounds(50,50,100,100);
        frame.add(l1);

        l2 = new JLabel("Address");
        l2.setBounds(70,55,100,100);
        frame.add(l2);

        frame.setTitle("Oindil's JFrame");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400,300);
        frame.getContentPane().setBackground(new Color(255,255,255));
        // frame.setResizable(false);
        
        
        ImageIcon image = new ImageIcon("logo.jpg");
        frame.setIconImage(image.getImage());
        frame.setVisible(true);
    }
}