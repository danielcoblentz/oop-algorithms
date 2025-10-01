////
//// Created by Hood User on 9/26/2024.
////
//#include <iostream>
//#include <cassert>
//#include <limits>
//using namespace std;
//
//int main() {
//    // Defining the classroom seating chart with 5 rows and 6 seats per row (all seats available initially)
//    int seatingChart[5][6] = {
//            {0, 0, 0, 0, 0, 0},
//            {0, 0, 0, 0, 0, 0},
//            {0, 0, 0, 0, 0, 0},
//            {0, 0, 0, 0, 0, 0},
//            {0, 0, 0, 0, 0, 0}
//    };
//
//    int row, col;
//    char choice;
//
//    do {
//        // Ask user which seat to mark as taken
//        cout << "\bEnter the row (1-5) and column (1-6) of the seat you want to mark as taken: ";
//        if (!(cin >> row >> col)) {  // Check if input is invalid
//            cin.clear();  // Clear the fail state
//            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // Ignore invalid input
//            cout << "\bInvalid input! Please try again." << endl;
//        }
//
//        // Check if the seat is valid and available
//        if (row >= 1 && row <= 5 && col >= 1 && col <= 6) {
//            if (seatingChart[row - 1][col - 1] == 0) {
//                seatingChart[row - 1][col - 1] = 1;  // Mark seat as taken
//                cout << "\bSeat at row " << row << ", column " << col << " marked as taken.\n";
//            } else {
//                cout << "That seat is already taken.\n";
//            }
//        } else {
//            assert (("Invalid seat selection. Please choose a valid row and column.\n"));
//        }
//
//        // Ask if the user wants to mark another seat
//        cout << "Would you like to mark another seat? (y/n): ";
//        cin >> choice;
//
//    } while (choice == 'y' || choice == 'Y');
//
//    // Final seating chart display
//    cout << "\nFinal Seating Chart (0 = Available, 1 = Taken):\n";
//    for (int i = 0; i < 5; i++) {
//        for (int j = 0; j < 6; j++) {
//            cout << seatingChart[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}
