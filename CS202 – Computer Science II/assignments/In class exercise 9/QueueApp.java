public class QueueApp {
    public static void main(String[] args) {
        Queue theQueue = new Queue(5); // queue holds 5 items

        theQueue.insert(10);
        theQueue.display();
        theQueue.insert(20);
        theQueue.display();
        theQueue.insert(30);
        theQueue.display();
        theQueue.insert(40);
        theQueue.display();

        theQueue.remove();
        theQueue.remove();
        theQueue.remove();

        theQueue.insert(50);
        theQueue.insert(60);
        theQueue.insert(70);
        theQueue.insert(80);

        while (!theQueue.isEmpty()) {
            long n = theQueue.remove();
            System.out.print(n + " ");
        }
        System.out.println();
    }
}
