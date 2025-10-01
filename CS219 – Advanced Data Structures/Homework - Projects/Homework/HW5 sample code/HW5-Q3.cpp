#include <iostream>
#include <chrono>
using namespace std;

// Assuming rFibNum is already defined elsewhere
long long int rFibNum(int a, int b, int n) {
    if (n == 1) return a;
    if (n == 2) return b;
    return rFibNum(a, b, n - 1) + rFibNum(a, b, n - 2);
}

int main() {
    int a = 0, b = 1, n = 50; // Increase n for more substantial execution time

    // Record the start time
    auto start = chrono::high_resolution_clock::now();

    // Call the rFibNum function and print the result
    cout << "Result: " << rFibNum(a, b, n) << endl;

    // Record the end time
    auto end = chrono::high_resolution_clock::now();

    // Calculate and print the duration in nanoseconds
    auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
    cout << "Program execution time: " << duration/1000000 << " ms" << endl;

    return 0;
}
