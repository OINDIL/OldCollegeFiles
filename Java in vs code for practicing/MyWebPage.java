import javax.swing.*;
public class MyWebPage {
    public static void main(String[] args) {
        JFrame f = new JFrame();
        JButton b = new JButton("OK");
        b.setBounds(150,30,20,15);
        f.add(b);
        f.setSize(200,100);
        f.setVisible(true);
        f.setLayout(null);
    }
}
