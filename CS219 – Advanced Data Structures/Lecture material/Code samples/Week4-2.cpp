//
// Created by Hood User on 9/10/2024.
//
#include <iostream>
#include <fstream>  // Include for file operations
using namespace std;

int main() {
    int score;
    ofstream outfile;  // Create an output file stream

    // Ask for the user's input
    cout << "Enter the student's score: ";
    cin >> score;

    // Open the file for writing
    outfile.open("grade.txt");

    // Check if the file opened successfully
    if (!outfile) {
        cout << "Error opening the file!" << endl;
        return 1;  // Exit the program if the file could not be opened
    }

    // Implement the grade calculation and write to the file using switch-case
    switch (score / 10) {
        case 10: // For perfect score of 100
        case 9:
            outfile << "The grade is A." << endl;
            break;
        case 8:
            outfile << "The grade is B." << endl;
            break;
        case 7:
            outfile << "The grade is C." << endl;
            break;
        case 6:
            outfile << "The grade is D." << endl;
            break;
        default:
            outfile << "The grade is F." << endl;
            break;
    }

    // Close the file
    outfile.close();

    cout << "The grade has been written to grade.txt." << endl;

    return 0;
}
