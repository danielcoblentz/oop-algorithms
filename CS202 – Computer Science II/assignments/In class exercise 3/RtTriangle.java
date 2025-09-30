import java.util.Scanner;

public class RtTriangle extends AbstractShape {
    private double a; // leg a
    private double b; // leg b

    public RtTriangle() {
        this.shapeName = "Right Triangle";
        this.a = 0.0;
        this.b = 0.0;
    }

    @Override
    public double computeArea() {
        return 0.5 * a * b;
    }

    @Override
    public double computePerimeter() {
        double c = Math.hypot(a, b);
        return a + b + c;
    }

    @Override
    public void readShapeData() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter length of leg a: ");
        a = in.nextDouble();
        System.out.print("Enter length of leg b: ");
        b = in.nextDouble();
        // do not close Scanner that wraps System.in
    }
}
