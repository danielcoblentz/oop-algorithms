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

    public  double computeArea(){
    return width*height;                //use Pi r^2 for PA_1

    }
    public double computePerimeter(){

        return 2*(width*height);                //math.Pi or 3.14
    }
    public void readShapeData(){

Scanner keyboard = new Scanner(System.in);
System.out.print("enter the width of the rectnagle: ");
width = keyboard.nextDouble();                          //enter radius of circle here
System.out.print("enter the height of the rectnagle: ");
height = keyboard.nextDouble();
    }
}
