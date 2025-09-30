public class MyList {
    // data fields
    public Node head = null;
    public int size = 0;

    // Node class definition
    class Node {
        int data;
        Node next;

        public Node(int data) {
            this.data = data;
            this.next = null;
        }
    }

    // a
    public int front() {
        return head != null ? head.data : -1; // Return -1 if the list is empty
    }

    // b
    public int size() {
        return size;
    }

    // c
    public void insert_Head(int insert_me) {
        Node temp = new Node(insert_me);
        temp.next = head;
        head = temp;
        size++;
    }

    // d
    public void delete_head() {
        if (head != null) {
            head = head.next;
            size--;
        }
    }

    // e
    public void display() {
        for (Node temp = head; temp != null; temp = temp.next) {
            System.out.print("->" + temp.data);
        }
        System.out.println();
    }

    // f
    public int get_back() {
        if (head == null) {
            return -1; // Return -1 if the list is empty
        }
        Node temp = head;
        while (temp.next != null) {
            temp = temp.next;
        }
        return temp.data;
    }

    // g
    public void insert_back(int insert_me) {
        Node newNode = new Node(insert_me);
        if (head == null) {
            head = newNode;
        } else {
            Node temp = head;
            while (temp.next != null) {
                temp = temp.next;
            }
            temp.next = newNode;
        }
        size++;
    }

    // h
    public void delete_back() {
        if (head == null) {
            return; // List is empty
        }
        if (head.next == null) {
            head = null;
        } else {
            Node temp = head;
            while (temp.next.next != null) {
                temp = temp.next;
            }
            temp.next = null;
        }
        size--;
    }

    // i
    public boolean search(int target) {
        for (Node temp = head; temp != null; temp = temp.next) {
            if (temp.data == target) {
                return true;
            }
        }
        return false;
    }

    // j
    public void insert(int after_me, int insert_me) {
        Node newNode = new Node(insert_me);
        Node temp = head;
        while (temp != null && temp.data != after_me) {
            temp = temp.next;
        }
        if (temp != null) {
            newNode.next = temp.next;
            temp.next = newNode;
            size++;
        }
    }

    // k
    public void remove(int delete_me) {
        if (head == null) {
            return; // List is empty
        }
        if (head.data == delete_me) {
            head = head.next;
            size--;
            return;
        }
        Node temp = head;
        while (temp.next != null && temp.next.data != delete_me) {
            temp = temp.next;
        }
        if (temp.next != null) {
            temp.next = temp.next.next;
            size--;
        }
    }

    public static void main(String[] args) {
        MyList list = new MyList();

        // Test methods
        list.insert_Head(10);
        list.insert_Head(20);
        list.insert_back(30);
        list.display(); // ->20->10->30

        System.out.println("Front: " + list.front()); // 20
        System.out.println("Back: " + list.get_back()); // 30

        list.delete_head();
        list.display(); // ->10->30

        list.delete_back();
        list.display(); // ->10

        System.out.println("Size: " + list.size()); // 1
        System.out.println("Search 10: " + list.search(10)); // true
        System.out.println("Search 40: " + list.search(40)); // false

        list.insert(10, 40);
        list.display(); // ->10->40

        list.remove(10);
        list.display(); // ->40
    }
}
