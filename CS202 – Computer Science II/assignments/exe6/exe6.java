public class exe6 {
    public static void main(String[] args) {
        MyList myList = new MyList();

        // Insert elements into the list
        myList.insert_Head(10);
        myList.insert_back(20);
        myList.insert_back(30);
        myList.display(); // Should show: 10 20 30

        // Testing get_back()
        System.out.println("Last item: " + myList.get_back()); // Should be 30

        // Testing delete_back()
        myList.delete_back();
        myList.display(); // Should show: 10 20
    
         // Testing search()
        System.out.println("Searching for 20: " + myList.search(20)); // Should be true
        System.out.println("Searching for 30: " + myList.search(30)); // Should be false (30 was deleted)
   

      
        // Testing insert(after_me, insert_me)
        myList.insert(10, 15); // Insert 15 after 10
        myList.display(); // Should show: 10 15 20
    
  
        // Testing remove(delete_me)
        myList.remove(15);
        myList.display(); // Should show: 10 20

  
    }}