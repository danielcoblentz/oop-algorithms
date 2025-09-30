public abstract class AbstractShape implements Shape {
    //data fields
protected String shapeName;

    //methods

Public String getShapeName() {
    return shapeName;
}
    //abstract methods
    public abstract double computeArea();
    public abstract double computePerimeter();
    public abstract void readShapeData();
    
}
