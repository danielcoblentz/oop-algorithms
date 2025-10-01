//
// Created by Hood User on 9/24/2024.
//
#include <iostream>
#include <iomanip>
using namespace std;

// Function to find the index of the smallest salary starting from 'start' index
int findMin(double arr[], int start, int n) {
    int minIndex = start;
    for (int i = start + 1; i < n; i++) {
        // Use ternary operator to update minIndex if a smaller element is found
        minIndex = (arr[i] < arr[minIndex]) ? i : minIndex;
    }
    return minIndex;
}

// Function to perform selection sort on the salaries array
void selectionSort(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Find the index of the smallest salary in the unsorted portion
        int minIndex = findMin(arr, i, n);

        // Swap the found minimum element with the current element
        if (minIndex != i) {
            double temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

// Function to print the array of salaries
void printArray(double arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " " << setprecision(2) << fixed;
    cout << endl;
}

int main() {
    // Array representing the annual salaries of employees
    double salaries[] = {50000.35, 75000.45, 60000.25, 45000, 80000};
    int n = sizeof(salaries) / sizeof(salaries[0]);

    cout << "Original salaries: ";
    printArray(salaries, n);

    // Sorting the salaries using selection sort
    selectionSort(salaries, n);

    cout << "Sorted salaries: ";
    printArray(salaries, n);

    return 0;
}
