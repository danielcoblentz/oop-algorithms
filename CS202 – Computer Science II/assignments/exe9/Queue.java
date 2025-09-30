class Queue {
   private int maxSize;
   private long[] queArray;
   private int front;
   private int rear;
   private int nItems;

   public Queue(int s) { // constructor
       maxSize = s;
       queArray = new long[maxSize];
       front = 0;
       rear = -1;
       nItems = 0;
   }

   public void insert(long j) { // put item at rear of queue
       if (rear == maxSize - 1) // deal with wraparound
           rear = -1;
       queArray[++rear] = j; // increment rear and insert
       nItems++; // one more item
   }

   public long remove() { // take item from front of queue
       long temp = queArray[front++]; // get value and incr front
       if (front == maxSize) // deal with wraparound
           front = 0;
       nItems--; // one less item
       return temp;
   }

   public long peekFront() { // peek at front of queue
       return queArray[front];
   }

   public boolean isEmpty() { // true if queue is empty
       return (nItems == 0);
   }

   public boolean isFull() { // true if queue is full
       return (nItems == maxSize);
   }

   public int size() { // number of items in queue
       return nItems;
   }

   public void display() {
       if (nItems == 0) {
           System.out.println("Queue is empty.");
           return;
       }

       System.out.print("Queue contents: ");
       if (front <= rear) {
           // Case #1: No wraparound, display from front to rear
           for (int i = front; i <= rear; i++) {
               System.out.print(queArray[i] + " ");
           }
       } else {
           // Case #2: Wraparound (rear < front)
           // Display from front to end of array
           for (int i = front; i < maxSize; i++) {
               System.out.print(queArray[i] + " ");
           }
           // Display from start of array to rear
           for (int i = 0; i <= rear; i++) {
               System.out.print(queArray[i] + " ");
           }
       }
       System.out.println();
   }
}

class QueueApp {
   public static void main(String[] args) {
       Queue theQueue = new Queue(5); // queue holds 5 items

       theQueue.insert(10); // insert items
       theQueue.display();
       theQueue.insert(20);
       theQueue.display();
       theQueue.insert(30);
       theQueue.display();
       theQueue.insert(40);
       theQueue.display();

       theQueue.remove(); // remove items
       theQueue.display();
       theQueue.remove();
       theQueue.display();
       theQueue.remove();
       theQueue.display();

       theQueue.insert(50); // insert more items
       theQueue.insert(60);
       theQueue.insert(70);
       theQueue.insert(80);
       theQueue.display();

       while (!theQueue.isEmpty()) { // remove and display all items
           long n = theQueue.remove();
           System.out.print(n + " ");
       }
       System.out.println();
   }
}
