//
// Created by Hood User on 9/4/2024.
//
//#include <iostream>
//using namespace std;
//
//int main() {
//    char op;
//    int num1, num2, result;
//
//    cout << "Enter an arithmetic expression (e.g., 5 + 3): ";
//
//    // Read the first number
//    cin >> num1;
//
//    // Read the operator
//    cin >> op;
//
//    // Put the operator back into the input stream using putback()
//    cin.putback(op);
//
//    // Re-read the operator and the second number
//    cin >> op >> num2;
//
//    // Perform the arithmetic operation based on the operator
////    switch (op) {
////        case '+':
////            result = num1 + num2;
////            break;
////        case '-':
////            result = num1 - num2;
////            break;
////        case '*':
////            result = num1 * num2;
////            break;
////        case '/':
////            if (num2 != 0)
////                result = num1 / num2;
////            else {
////                cout << "Error: Division by zero!" << endl;
////                return 1;
////            }
////            break;
////        default:
////            cout << "Error: Invalid operator!" << endl;
////            return 1;
////    }
//
//    if (op == '+') {
//        result = num1 + num2;
//    } else if (op == '-') {
//        result = num1 - num2;
//    } else if (op == '*') {
//        result = num1 * num2;
//    } else if (op == '/') {
//        if (num2 != 0) {
//            result = num1 / num2;
//        } else {
//            cout << "Error: Division by zero!" << endl;
//            return 1;
//        }
//    } else {
//        cout << "Error: Invalid operator!" << endl;
//        return 1;
//    }
//
//    // Display the result
//    cout << "The result of " << num1 << " " << op << " " << num2 << " is: " << result << endl;
//
//    return 0;
//}
