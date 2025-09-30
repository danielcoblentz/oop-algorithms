public class myStack {
   
        //data fields
private int[] stack; // declaration
private int maxsize; //determines the max size of the stack
private int top = -1; // integer value which value is currently at the top of the stack



        //methods
public myStack (int s){
    maxsize=s;
    stack = new int[maxsize]; //enstanciation
    top=-1;

}

public void push(int x)
{
        top++;
        stack[top]=x;
        //stack[++top]=x;
}

public int pop(){
        return stack[top--];
}

public boolean isFull(){
        //is full when top = maximum size - 1

        return top == maxsize-1;
}

public boolean isEmpty(){
        return top == -1; //top<0
}

public void display(){
        for(int i =0; i<=top; i++){ //displays contents in the stack
                System.out.print(stack[i] + "");
                System.out.println();
        }
        
}

    }
