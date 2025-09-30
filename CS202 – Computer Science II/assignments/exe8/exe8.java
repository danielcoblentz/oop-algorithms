public class exe8 {
    public static void main(String[] args) {
        myStack s1 = new myStack(5);

        if (s1.isEmpty())
        System.out.println("the stack is empty!");


        s1.push(10);
        s1.push(20);
        s1.push(30);

        s1.display();

        System.out.println("pop the top value: " + s1.pop());
        s1.display(); // should only see 10, 20

        s1.push(40);
        s1.push(50);
        s1.push(60);


        if (s1.isFull())
        System.out.println("the stack is Full!");
    }
    
}

