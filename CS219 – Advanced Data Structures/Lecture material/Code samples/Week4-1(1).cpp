//
// Created by Hood User on 9/10/2024.
//
#include <iostream>
#include <fstream>  // Include for file operations
using namespace std;

int main() {
    int score;
    ofstream outfile;  // Create an output file stream
    cout << "Enter the student's score: ";
//    cin >> score;

    while (!(cin >> score)) {
        // If the input is not an integer
        cin.clear();  // Clear the error flag
        cin.ignore(10000, '\n');  // Ignore the invalid input
        cout << "\bInvalid input. Please enter an integer: ";
    }

    cout << "\bYou entered a valid integer: " << score << endl;

    // Open the file for writing
    outfile.open("grade.txt");

    // Check if the file opened successfully
    if (!outfile) {
        cout << "Error opening the file!" << endl;
        return 1;  // Exit the program if the file could not be opened
    }

    // Implement the grade calculation and write to the file
    if (score >= 90)
        outfile << "The grade is A." << endl;
    else if (score >= 80)
        outfile << "The grade is B." << endl;
    else if (score >= 70)
        outfile << "The grade is C." << endl;
    else if (score >= 60)
        outfile << "The grade is D." << endl;
    else
        outfile << "The grade is F." << endl;

    // Close the file
    outfile.close();

    cout << "The grade has been written to grade.txt." << endl;

    return 0;
}