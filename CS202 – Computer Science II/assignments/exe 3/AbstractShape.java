public abstract class AbstractShape implements Shape {
    // Data fields
    protected String shapeName;

    // Methods
    public String getShapeName() {
        return shapeName;
    }

    // Abstract methods
    public abstract double computeArea();
    public abstract double computePerimeter();
    public abstract void readShapeData();
}
