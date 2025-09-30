package PA4;
import java.util.*;
public class PA4 {
    public static void main(String[] args) {
        // Input read the expression from the user
        Scanner keyboard = new Scanner(System.in);
        System.out.print("Please enter math expression: ");
        String expression = keyboard.nextLine();

        Stack<Character> s = new Stack<Character>();

        // Balanced parentheses algo.
        Boolean isBalanced = true; // Assume that the expression is true to begin with
        for (int i = 0; i < expression.length(); i++) {
            char c = expression.charAt(i);

            if (c == '(' || c == '{' || c == '[') {
                s.push(c);
            } else if ((c == ')' && (s.isEmpty() || s.peek() != '(')) ||
                       (c == '}' && (s.isEmpty() || s.peek() != '{')) ||
                       (c == ']' && (s.isEmpty() || s.peek() != '['))) {
                isBalanced = false;
                break; // Unmatching closing symbol, end program


            } else if (c == ')' || c == '}' || c == ']') {
                s.pop(); // Pop the matching opening symbol
            }
        }

        // If the stack is not empty then there are unmatched opening symbols
        if (!s.isEmpty()) {
            isBalanced = false;
        }

        // Output to user
        if (isBalanced) {
            System.out.println("The expression is balanced");
        } else {
            System.out.println("The expression is not balanced");
        }

        keyboard.close(); // Close the scanner
    }
}
