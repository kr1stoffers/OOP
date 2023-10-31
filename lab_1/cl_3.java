package lab_1;

public class cl_3 extends cl_2 {
    public static float x1, x2;

    public static void calc() {
        if (d == 0) {
            x1 = -b / (2 * a);
            return;
        }
        if (d < 0) {
            return;
        }
        x1 = (float) ((-b + Math.sqrt(d)) / (2 * a));
        x2 = (float) ((-b - Math.sqrt(d)) / (2 * a));
    }

    public static void display() {
        cl_1.VVOD();
        cl_2.discr();
        cl_3.calc();

        if (d == 0) {
            System.out.println("Корень x: " + x1);
            return;
        }
        if (d < 0) {
            System.out.println("Корней нет");
            return;
        }
        System.out.println("Корни: x1 = " + x1 + "x2 = " + x2);
    }
}
