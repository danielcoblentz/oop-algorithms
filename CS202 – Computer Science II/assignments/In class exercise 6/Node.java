

public class Node {
    //basic data field
    public int data; //content
    public Node next; //pointer to next node

    //methods
    public Node (int data) {
        this.data = data;
        next=null;
    }

    public Node(int data, Node nodeRef){
        this.data = data;
        next = nodeRef;
    }
}