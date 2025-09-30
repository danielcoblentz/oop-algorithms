import java.io.*;                 


class DequeApp
   {
   public static void main(String[] args) 
      {
      //add code to test all the methods in the Deque class

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
      
      }
//--------------------------------------------------------------
   public int removeLeft()      // take item from left of deque
      {
         long temp = dekArray[left++]; // get value and incr left
         if(left == maxSize)        // deal with wraparound
            left = 0;
         nItems--;                  // one less item
         return temp; 
      }
//--------------------------------------------------------------
   public int removeRight()    // take item from right of deque
      {
      
      }
//--------------------------------------------------------------
   public boolean isEmpty()    // true if deque is empty
      {  }
//--------------------------------------------------------------
   public boolean isFull()     // true if deque is full
      {  }
//--------------------------------------------------------------
   public int size()           // number of items in deque
      { }
//--------------------------------------------------------------
   public void display()
      {
      
      }  
//--------------------------------------------------------------
   }  

