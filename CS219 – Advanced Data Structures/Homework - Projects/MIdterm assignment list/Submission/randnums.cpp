#include <iostream>
#include <cstdlib> // for rand() and srand() to be used later
#include <ctime>
using namespace std;

// function to handle a single round of guessing
int play_round() {
    int random_number = rand() % 100 + 1;// generate random number between 1 and 100 for the user to choose from
    int guess;
    int guess_count = 0;

    cout << "Guess a number between 1 and 100: ";

    // keep looping until the user guesses the correct number
    while (true) {
        cin >> guess;
        guess_count++; //increment guess count every time

        if (guess < random_number) {
            cout << "too low! Try again: ";
        } else if (guess > random_number) {
            cout << "too high! Try again: ";
        } else {
            cout << "congratulations! You guessed the number in " << guess_count << " attempts.\n";
            break;
        }
    }

    return guess_count; // return the number of guesses made in this round
}

// summary of the user's performance
void display_summary(int total_rounds, int total_guesses) {
    cout << "\nGame Summary:\n";
    cout << "----------------------\n";
    cout << "Total Rounds Played: " << total_rounds << endl;
    cout << "Total Guesses Made: " << total_guesses << endl;
    cout << "Average Guesses per Round: " << static_cast<double>(total_guesses) / total_rounds << endl;
}

int main() {
    srand(static_cast<unsigned int>(time(0))); // seed the random number generator with a different value each time

    int total_rounds = 0;
    int total_guesses = 0;
    int rounds_won = 0;

    char play_again;

    do {
        total_rounds++; // increment the round counter
        cout << "\nRound " << total_rounds << ":\n";
        int guesses_this_round = play_round(); // play a single round
        total_guesses += guesses_this_round; // add guesses to total

        // check if the user won this round
        if (guesses_this_round > 0) {
            rounds_won++;
        }

        // ask the user if they want to play another round
        cout << "\nDo you want to play another round? (y/n): ";
        cin >> play_again;

    } while (play_again == 'y' || play_again == 'Y');

    // performance summary output to the user
    display_summary(total_rounds, total_guesses);

    cout << "\nThank you for playing! You won " << rounds_won << " out of " << total_rounds << " rounds!\n";

    return 0;
}
