//
// Created by Hood User on 8/27/2024.
//
#include <iostream>
using namespace std;

int main() {
    int fahrenheit;
    cout << "Enter temperature in Fahrenheit: ";
    cin >> fahrenheit;

    int celsius = (fahrenheit - 32) * 5 / 9;

    cout << "The temperature in Celsius is: " << celsius << "°C" << endl;
    return 0;
}

