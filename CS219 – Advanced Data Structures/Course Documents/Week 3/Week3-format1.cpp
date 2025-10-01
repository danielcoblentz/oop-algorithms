//
// Created by Hood User on 8/28/2024.
//
#include <iostream>
#include <iomanip>  // Include iomanip for setw, setprecision, etc.

using namespace std;

int main() {
    // Example values to format
    int num1 = 123;
    int num2 = 4567;
    double num3 = 3.14159;
    double num4 = 2.71828;

    // Output without any formatting
    cout << "Without formatting:" << endl;
    cout << num1 << " " << num2 << " " << num3 << " " << num4 << endl;

    // Using setw to set the width of the output
    cout << "\nUsing setw:" << endl;
    cout << setw(5) << num1 << " " << setw(5) << num2 << " " << setw(10) << num3 << " " << setw(10) << num4 << endl;

    // Using setprecision to set the number of decimal places
    cout << "\nUsing setprecision(3):" << endl;
    cout << setprecision(3) << num3 << " " << num4 << endl;

    // Combining setw and setprecision
    cout << "\nCombining setw and setprecision:" << endl;
    cout << setw(10) << setprecision(3) << num3 << " " << setw(10) << num4 << endl;

    // Unsetting floatfield (resetting formatting for floating-point numbers)
    cout << "\nAfter unsetting floatfield:" << endl;
    cout.unsetf(ios::fixed | ios::scientific);  // Unset any fixed or scientific formatting
    cout << num3 << " " << num4 << endl;

    return 0;
}
