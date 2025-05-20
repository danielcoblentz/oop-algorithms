import java.util.*;
public class assignment1 {
    public static void main(String[] args) {


        // define expression and both value, operator stacks, and capture input from user via keyboard
        String expression;
        Stack<Double> valueStack = new Stack<>();
        Stack<Character> operatorStack = new Stack<>();


        Scanner keyboard = new Scanner(System.in);
        System.out.println("enter a math expression to get the result:");
        expression = keyboard.nextLine();
        

        try {
            for (int i = 0; i < expression.length(); i++) {
                char c = expression.charAt(i);

                if (Character.isWhitespace(c)) continue; //skip spaces

                if (Character.isDigit(c) || c == '.') { 
                    // handle floatingpoint nums (extra credit portion)
                    StringBuilder numStr = new StringBuilder();
                    boolean hasDecimal = false;


                    while (i < expression.length() && (Character.isDigit(expression.charAt(i)) || expression.charAt(i) == '.')) {
                        if (expression.charAt(i) == '.') {
                            if (hasDecimal) {
                                throw new RuntimeException("invalid number format: multiple decimal points detected try entering just one");
                            }
                            hasDecimal = true;
                        }
                        numStr.append(expression.charAt(i));
                        i++;
                    }
                    i--;
                    valueStack.push(Double.parseDouble(numStr.toString()));


                } else if (c == '(') {
                    operatorStack.push(c);
                    

                } else if (c == ')') {
                    // process everything within the parentheses
                    while (!operatorStack.isEmpty() && operatorStack.peek() != '(') {
                        valueStack.push(applyOperator(operatorStack.pop(), valueStack.pop(), valueStack.pop()));
                    }

                    if (operatorStack.isEmpty()) {
                        throw new RuntimeException("mismatched parentheses in the expression! try again..");
                    }

                    operatorStack.pop(); // pop the left parenthesis from teh stack

                } else if (c == '+' || c == '-' || c == '*' || c == '/') {
                    // ensuring we keep operator precedence in the process
                    while (!operatorStack.isEmpty() && precedence(c) <= precedence(operatorStack.peek())) {
                        valueStack.push(applyOperator(operatorStack.pop(), valueStack.pop(), valueStack.pop()));
                    }
                    operatorStack.push(c);
                } 
                
                else {
                    throw new RuntimeException("invalid character detected.. try entering a new expression: " + c); // let the user know there `is an invlaid char and print it out
                }
            }


            // final processing of all remaining items in stacks
            while (!operatorStack.isEmpty()) {
                valueStack.push(applyOperator(operatorStack.pop(), valueStack.pop(), valueStack.pop()));
            }


            // print final result to the user in terminal
            System.out.println("the final result is " + valueStack.pop()); //result will be in floating point format not sure if that is acceptable...
        } catch (Exception e) {
            System.out.println("error invalid expression: " + e.getMessage());
        }
    }


 // helper method to appily operatotrs and return the correct val also handle errorrs
    private static double applyOperator(char operator, double b, double a) {
        switch (operator) {

            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': 
                if (b == 0) throw new RuntimeException("cannot divide by zero!");
                return a / b;
            default: throw new RuntimeException("invalid operator!");

        }
    }


//  additional helper method to detemrine operator precedence in the expression (which ones to process first to make sure we get result)
    private static int precedence(char operator) {
        if (operator == '+' || operator == '-') return 1; // lower pres
        if (operator == '*' || operator == '/') return 2; // higher pres
        return -1;
    }
}
