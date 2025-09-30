import java.util.*;

public class Rectangle extends AbstractShape{

    //data fiedls
    private double width;
    private double height;

    //methods
    public Rectangle() {
        shapeName="Rectangle";
        width=0.0;
        height=0.0;
    }

    @Override
    public double computeArea() {
        return width * height;
    }

    @Override
    public double computePerimeter() {
        return 2 * (width + height);
    }

    @Override
    public void readShapeData() {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the width of the rectangle: ");
        width = in.nextDouble();
        System.out.print("Enter the height of the rectangle: ");
        height = in.nextDouble();
        // Note: not closing the Scanner because it would close System.in for other code
    }
}
