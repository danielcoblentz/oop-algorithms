//#include <iostream>
//using namespace std;
//
//// Function to find the index of the smallest element in the array starting from 'start' index
//int findMin(int arr[], int start, int n) {
//    int minIndex = start;
//    for (int i = start + 1; i < n; i++) {
//        // Use ternary operator to update the minIndex
//        minIndex = (arr[i] < arr[minIndex]) ? i : minIndex;
//    }
//    return minIndex;
//}
//
//// Function to perform selection sort
//void selectionSort(int arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        // Find the index of the smallest element in the unsorted portion
//        int minIndex = findMin(arr, i, n);
//        // Swap the found minimum element with the current element
//        if (minIndex != i) {
//            int temp = arr[i];
//            arr[i] = arr[minIndex];
//            arr[minIndex] = temp;
//        }
//    }
//}
//
//// Function to print the array
//void printArray(int arr[], int n) {
//    for (int i = 0; i < n; i++)
//        cout << arr[i] << " ";
//    cout << endl;
//}
//
//int main() {
//    int arr[] = {12, 11, 13, 5, 6};
//    int n = sizeof(arr) / sizeof(arr[0]);
//
//    cout << "Original array: ";
//    printArray(arr, n);
//
//    // Sorting the array using selection sort
//    selectionSort(arr, n);
//
//    cout << "Sorted array: ";
//    printArray(arr, n);
//
//    return 0;
//}
