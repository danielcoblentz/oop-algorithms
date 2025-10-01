//
// Created by Hood User on 9/3/2024.
//
#include <iostream>
using namespace std;

int main() {
    int favoriteNumber;
    char fullName[100];

    // Step 1: Ask for the favorite number
    cout << "Enter your favorite number: ";
    cin >> favoriteNumber;

    // Step 2: Use cin.ignore() to clear the input buffer
    cin.ignore();

    // Step 3: Ask for the full name
    cout << "Enter your full name: ";
    cin.getline(fullName, 100);

    // Step 4: Display the favorite number and full name
    cout << "Your favorite number is: " << favoriteNumber << endl;
    cout << "Your full name is: " << fullName << endl;

    return 0;
}
