package lab_2;

import java.awt.*;
import javax.swing.JFrame;

public class myDraw extends JFrame {
    public int x1, y1, x2, y2, c1, c2, r;
    public int colorIndex = 0;

    public static void main(String[] args) {
        new myDraw(150, 150, 150, 150, 200, 200, 1);
    }

    myDraw(int x1, int x2, int y1, int y2, int c1, int c2, int r) {
        this.x1 = x1;
        this.x2 = x2;
        this.y1 = y1;
        this.y2 = y2;
        this.c1 = c1;
        this.c2 = c2;
        this.r = r;
        setLayout(null);
        setSize(750, 500);
        setVisible(true);
        this.setDefaultCloseOperation(EXIT_ON_CLOSE);

    }

    public void paint(Graphics f) {

        if (colorIndex == 0) {
            f.setColor(Color.BLUE);
            f.fillOval(x1, y1, c1, c1);
        } else {
            f.setColor(Color.GREEN);
            f.fillOval(400, 150, c1, c1);
        }

    }
}
