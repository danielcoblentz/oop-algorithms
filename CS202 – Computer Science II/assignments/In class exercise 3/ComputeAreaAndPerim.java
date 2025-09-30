import java.util.Scanner;

/**
 * Computes the area and perimeter of selected figures.
 */
public class ComputeAreaAndPerim {

    /**
     * The main program performs the following steps.
     * 1. It asks the user for the type of figure.
     * 2. It asks the user for the characteristics of that figure.
     * 3. It computes the perimeter.
     * 4. It computes the area.
     * 5. It displays the result.
     * @param args The command line arguments -- not used
     */
    public static void main(String args[]) {
        AbstractShape myShape;
        double perimeter;
        double area;
        myShape = getShape(); // Ask for figure type
        if (myShape == null) {
            System.out.println("No shape selected. Exiting program.");
            System.exit(1);
        }

        myShape.readShapeData(); // Read the shape data
        perimeter = myShape.computePerimeter(); // Compute perimeter
        area = myShape.computeArea(); // Compute the area
        displayResult(area, perimeter); // Display the result
        System.exit(0); // Exit the program
    }

    /**
     * Ask the user for the type of figure.
     * @return An instance of the selected shape
     */
    public static AbstractShape getShape() {
        Scanner in = new Scanner(System.in);
        while (true) {
            System.out.println("Select a figure to compute (enter letter):");
            System.out.println("  C - Circle (not implemented)");
            System.out.println("  R - Rectangle");
            System.out.println("  T - Right Triangle (not implemented)");
            System.out.print("Choice: ");
            String figType = in.next();
            if (figType.equalsIgnoreCase("R")) {
                return new Rectangle();
            } else if (figType.equalsIgnoreCase("C") || figType.equalsIgnoreCase("T")) {
                System.out.println("That shape is not implemented in this exercise. Please choose another or press Ctrl+C to exit.");
            } else {
                System.out.println("Invalid choice. Please try again.");
            }
        }
    }

    /**
     * Display the result of the computation.
     * @param area The area of the figure
     * @param perim The perimeter of the figures
     */
    private static void displayResult(double area, double perim) {
        System.out.printf("The area is %.2f%nThe perimeter is %.2f%n",
                area, perim);
    }
}
/*</listing>*/