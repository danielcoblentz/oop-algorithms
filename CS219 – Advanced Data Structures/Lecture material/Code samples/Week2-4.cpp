//
// Created by Hood User on 8/27/2024.
//
#include <iostream>
#define PI 3.14159
using namespace std;

int main() {
    int userInput;
    cout << "Enter an integer: ";
    cin >> userInput;

    float result = static_cast<float>(userInput) * PI;

    cout << "The result is: " << result << endl;
    return 0;
}