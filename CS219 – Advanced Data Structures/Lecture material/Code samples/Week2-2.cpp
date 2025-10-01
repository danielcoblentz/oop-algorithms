//
// Created by Hood User on 8/27/2024.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    int numStudents = 10; // Number of students
    int numTests = 5;     // Number of tests per student
    string names[numStudents];  // Array to store student names
    double scores[numStudents][numTests]; // 2D array to store scores
    double totalAverage = 0;    // Variable to store the total average score

    // Input student names and scores
    for (int i = 0; i < numStudents; i++) {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> names[i];

        double sum = 0; // To store the sum of scores for each student
        for (int j = 0; j < numTests; j++) {
            cout << "\rEnter the score for test " << j + 1 << " for " << names[i] << ": ";
            cin >> scores[i][j];
            sum += scores[i][j]; // Adding the score to the sum
        }

        double average = sum / numTests; // Calculate the average score
        totalAverage += average;         // Add the average to the total average

        // Determine the grade based on the average score
        char grade;
        if (average >= 90) {
            grade = 'A';
        } else if (average >= 80) {
            grade = 'B';
        } else if (average >= 70) {
            grade = 'C';
        } else if (average >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }

        // Output the student's name, average score, and grade
        cout << "Student: " << names[i] << ", Average Score: " << average << ", Grade: " << grade << endl;
    }

    // Calculate the class average
    double classAverage = totalAverage / numStudents;
    cout << "Class Average: " << classAverage << endl;

    return 0;
}
