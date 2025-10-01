import java.io.*;                 


class DequeApp
   {
   public static void main(String[] args) 
      {
      // simple test of Deque
      Deque dq = new Deque(10);
      dq.insertRight(10);
      dq.insertRight(20);
      dq.insertLeft(5);
      dq.insertLeft(2);
      System.out.print("After inserts: "); dq.display();

      int a = dq.removeLeft();
      System.out.println("removeLeft() -> " + a);
      int b = dq.removeRight();
      System.out.println("removeRight() -> " + b);
      System.out.print("After removes: "); dq.display();

      System.out.println("size = " + dq.size());
      System.out.println("isEmpty = " + dq.isEmpty());
      System.out.println("isFull = " + dq.isFull());

      }  
   }  



class Deque
   {
   private int maxSize; //max size of the queue
   private int[] dekArray; //array container
   private int left; //left end index
   private int right; //right end index
   private int nItems; //actual number of items in queue

   public Deque(int s) 
      {
      maxSize = s;
      dekArray = new int[maxSize];
      int center = maxSize/2 - 1;
      left = center+1;            
      right = center;             
      nItems = 0;
      }
//--------------------------------------------------------------
   public void insertLeft(int j) // put item at left of deque
      {
         if(left == 0)               // deal with wraparound
            left = maxSize;
         dekArray[--left] = j;       // insert and decrement left
         nItems++;                   // one more item
      }
//--------------------------------------------------------------
   public void insertRight(int j) // put item at right of deque
      {
      if(right == maxSize-1)       // deal with wraparound
         right = -1;
      dekArray[++right] = j;       // increment right and insert
      nItems++;                    // one more item
      }
//--------------------------------------------------------------
   public int removeLeft()      // take item from left of deque
      {
         int temp = dekArray[left++]; // get value and incr left
         if(left == maxSize)        // deal with wraparound
            left = 0;
         nItems--;                  // one less item
         return temp; 
      }
//--------------------------------------------------------------
   public int removeRight()    // take item from right of deque
      {
      int temp = dekArray[right--]; // get value and decrement right
      if(right == -1)              // deal with wraparound
         right = maxSize-1;
      nItems--;                    // one less item
      return temp;
      }
//--------------------------------------------------------------
   public boolean isEmpty()    // true if deque is empty
      { return nItems == 0; }
//--------------------------------------------------------------
   public boolean isFull()     // true if deque is full
      { return nItems == maxSize; }
//--------------------------------------------------------------
   public int size()           // number of items in deque
      { return nItems; }
//--------------------------------------------------------------
   public void display()
      {
      if(nItems == 0) {
         System.out.println("<empty>");
         return;
      }
      int idx = left;
      for(int i=0;i<nItems;i++) {
         System.out.print(dekArray[idx] + " ");
         idx++;
         if(idx == maxSize) idx = 0;
      }
      System.out.println();
      }  
//--------------------------------------------------------------
   }  

