import java.awt.*;
import javax.swing.*;

public class PifagorTree extends JFrame {

    public PifagorTree() {
        setTitle("Дерево Пифагора");
        setSize(850, 650);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    @Override
    public void paint(Graphics g) {
        super.paint(g);
        drawTree(g, 420, 550, -90, 10);
    }

    private void drawTree(Graphics g, int x1, int y1, double angle, int depth) {
        if (depth == 0) {
            return;
        }

        int x2 = x1 + (int) (Math.cos(Math.toRadians(angle)) * depth * 10);
        int y2 = y1 + (int) (Math.sin(Math.toRadians(angle)) * depth * 10);

        g.drawLine(x1, y1, x2, y2);

        drawTree(g, x2, y2, angle - 45, depth - 1);
        drawTree(g, x2, y2, angle + 45, depth - 1);
    }

    public static void main(String[] args) {
        PifagorTree tree = new PifagorTree();
        tree.setVisible(true);
    }
}
