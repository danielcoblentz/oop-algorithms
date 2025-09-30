import java.util.*;

public class Rectangle extends AbstractShape {

    // Data fields
    private double width;
    private double height;

    // Constructor
    public Rectangle() {
        shapeName = "Rectangle";
        width = 0.0;
        height = 0.0;
    }

    // Method to compute area
    public double computeArea() {
        return width * height;
    }

    // Method to compute perimeter
    public double computePerimeter() {
        return 2 * (width + height);
    }

    // Method to read shape data
    public void readShapeData() {
        Scanner keyboardScanner = new Scanner(System.in);
        System.out.print("Enter the width of the rectangle: ");
        width = keyboardScanner.nextDouble();
        System.out.print("Enter the height of the rectangle: ");
        height = keyboardScanner.nextDouble();
    }
}
