public class exe6 {
    public static void main(String[] args) {
        MyList list1 = new MyList();
        list1.insert_Head(30);
        list1.insert_Head(20);
        list1.insert_Head(10);
        System.out.println("the head of the list is: "+list1.front());

        list1.insert_Head(0);

        list1.display();

        list1.delete_head();

        list1.display();

        System.out.println("the size of the list is: "+list1.size());
    }
    
}
