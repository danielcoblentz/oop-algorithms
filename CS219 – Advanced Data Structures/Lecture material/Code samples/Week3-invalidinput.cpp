////
//// Created by Hood User on 9/5/2024.
////
//#include <iostream>
//#include <limits>
//
//using namespace std;
//
//// Function to get valid integer input using recursion
//int getValidInteger() {
//    int number;
//    cout << "Please enter an integer: ";
//    if (!(cin >> number)) {  // Check if input is invalid
//        cin.clear();  // Clear the fail state
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
//        cout << "Invalid input! Please try again." << endl;
//        return getValidInteger();  // Call the function recursively
//    }
//    return number;
//}
//
//int main() {
//    int validNumber = getValidInteger();
//    cout << "You entered a valid integer: " << validNumber << endl;
//    return 0;
//}