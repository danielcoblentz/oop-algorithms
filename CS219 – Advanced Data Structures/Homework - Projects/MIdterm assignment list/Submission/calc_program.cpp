#include <iostream>

using namespace std;

// function to add two numbers
double add(double a, double b) {
    return a + b;
}

//function to subtract two numbers
double subtract(double a, double b) {
    return a - b;
}

// function to multiply two numbers
double multiply(double a, double b) {
    return a * b;
}

// function to divide two numbers
double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}



int main() {
    double num1, num2, result;
    char operation;
    char cont = 'y';

    while (cont == 'y' || cont == 'Y') {
        // User input for numbers and operation
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter operation (+, -, *, /): ";
        cin >> operation;

        // Switch statement to perform operation based on user input
        switch (operation) {
            case '+':
                result = add(num1, num2);
            break;
            case '-':
                result = subtract(num1, num2);
            break;
            case '*':
                result = multiply(num1, num2);
            break;
            case '/':
                result = divide(num1, num2);
            break;
            default:
                cout << "invalid operation" << endl;
            continue;
        }


        // display the result
        cout << "Result: " << result << endl;

        //check if the user wants to perform another calculation
        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> cont;
    }

    return 0;
}
