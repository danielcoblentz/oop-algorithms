import java.util.Scanner;

public class Circle extends AbstractShape {
    private double radius;

    public Circle() {
        this.shapeName = "Circle";
        this.radius = 0.0;
    }

    @Override
    public double computeArea() {
        return Math.PI * radius * radius;
    }

    @Override
    public double computePerimeter() {
        return 2 * Math.PI * radius;
    }

    @Override
    public void readShapeData() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the radius of the circle: ");
        radius = in.nextDouble();
        // do not close the scanner (would close System.in)
    }
}
