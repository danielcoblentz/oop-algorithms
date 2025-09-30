import java.util.*;
import java.io.*;

public class Exercise10{
    
    public static void main(String[] args) {
        System.out.println("Enter the number of nodes on the BST: ");
        Scanner scan = new Scanner(System.in);
        int t = scan.nextInt();
        
        System.out.println("Enter each node's value: ");
        BST tree = new BST();
        
        while(t-- > 0) {
            int data = scan.nextInt();
            tree.insert(data);
        }
        scan.close();
        
        //tree.preOrder();
    } 
}

class Node {
    Node left;
    Node right;
    int data;
    
    Node(int data) {
        this.data = data;
        left = null;
        right = null;
    }
}

class BST {

  Node root = null;
  
   public void insert(int data)
   {
     root = insert(root,data);
   }
  
    public Node insert(Node root, int data) {
        if(root == null) {
            return new Node(data);
        } else {
            Node cur;
            if(data <= root.data) {
                cur = insert(root.left, data);
                root.left = cur;
            } else {
                cur = insert(root.right, data);
                root.right = cur;
            }
            return root;
        }
    }
    

    
}

