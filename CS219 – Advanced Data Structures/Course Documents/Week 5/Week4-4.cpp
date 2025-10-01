////
//// Created by Hood User on 9/11/2024.
////
//#include <iostream>  // This includes the input-output stream library for using cout
//using namespace std;  // This line allows us to avoid using 'std::' before cout and endl
//
//int main(){
//    int i, j;  // Declare two integer variables i and j, used as loop counters
//
//    // Outer loop controls the rows of the pattern
//    for (int i = 0; i < 6; i++){
//
//        // First inner loop prints spaces before the stars on each row
//        // It decreases the number of spaces as 'i' increases
//        for (int j = 5 - i; j > 0; j--){
//            cout << " ";  // Print a space
//        }
//
//        // Second inner loop prints the stars on each row
//        // It increases the number of stars as 'i' increases
//        for (int j = 0; j < i; j++) {
//            cout << "*";  // Print a star
////            cout << "\\"; // Print a backslash
//        }
//
//        // Move to the next line after printing spaces and stars in the current row
//        cout << '\n';
//    }
//
//    return 0;  // Return 0 to indicate successful execution of the program
//}
//
