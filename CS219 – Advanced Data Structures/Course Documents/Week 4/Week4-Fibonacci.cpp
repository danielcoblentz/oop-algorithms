//
// Created by Hood User on 9/12/2024.
//
#include <iostream>
using namespace std;

int main() {
    int n, a1 = 1, a2 = 1, nextTerm = 0;

    // Asking the user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    // Displaying the first two terms
    if (n == 1){
        cout << "\bFibonacci Series: " << a1;
    }
    else if (n == 2){
        cout << "\bFibonacci Series: " << a1 << ", " << a2;
    }
    else {
        cout << "\bFibonacci Series: " << a1 << ", " << a2 << ", ";
    }


    // Loop to generate the next terms in the series
    for (int i = 1; i <= n - 2; i++) {
        nextTerm = a1 + a2;

        if (i == n - 2)
            cout << nextTerm;
        else
            cout << nextTerm << ", ";


        a1 = a2;  // Update t1 to the current second term
        a2 = nextTerm;  // Update t2 to the newly calculated next term
    }

    return 0;  // Return 0 to indicate successful execution of the program
}
