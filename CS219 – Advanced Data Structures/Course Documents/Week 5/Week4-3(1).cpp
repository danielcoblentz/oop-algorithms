////
//// Created by Hood User on 9/11/2024.
////
//#include <iostream>
//#include <cstdlib>  // For rand() and srand()
//#include <ctime>    // For time()
//
//int main() {
//    // Seed the random number generator
//    srand(static_cast<unsigned int>(time(0)));
//
//    // Generate a random number between 0 and 99 (without %100 --> 32767)
//    int randomNumber = rand() % 100;
//
//    int guess;
//    bool correct = false;
//
//    std::cout << "Welcome to the Number Guessing Game!" << std::endl;
//    std::cout << "Try to guess the number between 0 and 32767." << std::endl;
//
//    // Flag-controlled while loop
//    while (!correct) {
//        std::cout << "Enter your guess: ";
//        std::cin >> guess;
//
//        if (guess < randomNumber) {
//            std::cout << "Too low! Try again." << std::endl;
//        } else if (guess > randomNumber) {
//            std::cout << "Too high! Try again." << std::endl;
//        } else {
//            std::cout << "Congratulations! You guessed the number." << std::endl;
//            correct = true;  // Set flag to true, exiting the loop
//        }
//    }
//
//    return 0;
//}
