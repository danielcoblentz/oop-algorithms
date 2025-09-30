import java.io.*;



public class CircApp
   {
   public static void main(String[] args) throws IOException
      {
      int j, nPlayers, nSkips, startNo;
      CircList theList = new CircList();  // make list

      putText("Enter the number of players: ");
      nPlayers = getInt();                   //input function

      for(j=nPlayers; j>0; j--)           // number 10, 20, ... // inserting the 5 players into the circ list
         theList.insert(j);

      putText("Players: ");
      theList.display();

      putText("Enter the the number of spaces to skip: ");
      nSkips = getInt();

      putText("Enter the the starting player's number: ");
      startNo = getInt();

theList.find(3);
      // Add your code here

      //find the starting player
         System.out.println("starting plauer found: ");
      theList.find(startNo).display();
      System.out.println("starting the game...");
      System.out.println("the list of elim players: ");
while(theList.getSize()>1)//outter loop keeps the game running + till we only have one player left
{
//inner loop will pass the potato n skips of times
for(int i =0; i<nSkips; i++){
   theList.step();
}
System.out.print(theList.delete().iData + " ");
}






//announce winner of game
System.out.println("the winner is: "+ theList.peek().iData); // display entire list + prints out nubmer

      }  // end main()
// -------------------------------------------------------------
   public static void putText(String s)
      {
      System.out.print(s);
      System.out.flush();
      }
// -------------------------------------------------------------
   public static String getString() throws IOException
      {
      InputStreamReader isr = new InputStreamReader(System.in);
      BufferedReader br = new BufferedReader(isr);
      String s = br.readLine();
      return s;
      }
// -------------------------------------------------------------
   public static char getChar() throws IOException
      {
      String s = getString();
      return s.charAt(0);
      }

//-------------------------------------------------------------
   public static int getInt() throws IOException
      {
      String s = getString();
      return Integer.parseInt(s);
      }
// -------------------------------------------------------------
   }  // end class CircApp
////////////////////////////////////////////////////////////////
class Link
   {
   public int iData;              // data item (key)
   public Link next;              // next link in list
// -------------------------------------------------------------
   public Link(int id)            // constructor
      { iData = id; }
// -------------------------------------------------------------
   public void display()      // display ourself
      { System.out.print(iData + " "); }
   }  // end class Link
////////////////////////////////////////////////////////////////
class CircList
   {
   private Link current;          // ref to current link
   private int count;             // # of links on list
// -------------------------------------------------------------
   public CircList()              // constructor
      {
      count = 0;                  // no links on list yet
      current = null;
      }
// -------------------------------------------------------------
   public boolean isEmpty()
      { return count==0; }
// -------------------------------------------------------------
   public int getSize()
      { return count; }
// -------------------------------------------------------------
   public void insert(int id)     // insert after current link
      {                           // make new link
      Link newLink = new Link(id);
      if(count == 0)              // if first one
         {
         current = newLink;       // current points to it
         current.next = current;  // next one is us
         }
      else
         {
         newLink.next = current.next; // downstream of new link
         current.next = newLink;      // upstream of new link
         }
      count++;                    // one more link
      }
// -------------------------------------------------------------
   public Link delete()        // delete link following currrent
      {
      Link tempLink;
      switch(count)
         {
         case 0:               // current is already null
            tempLink = current;
            break;
         case 1:               // delete ourself
            tempLink = current;
            current = null;
            count--;
            break;
         default:              // delete the next one
            tempLink = current.next;
            current.next = tempLink.next;
            count--;
            break;
         }
      return tempLink;
      }
// -------------------------------------------------------------
   public Link find(int key)      // find link with given key //use this for PA3 4th search method
      {                           //    at one past current
      int getHome = count;
      while(getHome > 0)          // while not back to
         {                        // beginning
         if(current.next.iData == key)  // found it?
            return current.next;        // return next one
         else                     // not found
            {                     // go to next link
            current = current.next;
            getHome--;            // one item closer to home
            }
         }
      return null;                // can't find it
      }
// -------------------------------------------------------------
   public Link delete(int key)    // delete link with given key
      {
      Link nextLink = find(key);        // find it
      if(nextLink != null)              // if found,
         {
         current.next = nextLink.next;  // delete it
         count--;
         }
      return nextLink;            // return null or link
      }
// -------------------------------------------------------------
   public void display()      // display the list
      {
      for(int j=0; j<count; j++)
         {
         current.next.display();
         current = current.next;
         }
      System.out.println("");
      }
// -------------------------------------------------------------
   public void step()
      {
      if(count != 0)
         current = current.next;  // go to next link
      }
// -------------------------------------------------------------
   public Link peek()
      { return current.next; }
// -------------------------------------------------------------
   }  // end class CurcList
////////////////////////////////////////////////////////////////