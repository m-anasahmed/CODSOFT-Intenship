#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    char playAgain;

    do {
        // Initialize random seed 
        srand(static_cast<unsigned int>(time(NULL)));

        // Generate a random number between 1 and 100
        int secret = rand() % 100 + 1;

        // Declare variables
        int guess;
        int attempts = 0;

        // Game loop
        do {
            // Prompt the user to enter a guess
            cout << "Enter a guess between 1 and 100: ";
            cin >> guess;

            // Increment the number of attempts
            attempts++;

            // Check if the guess is valid
            if (guess < 1 || guess > 100) {
                cout << "Invalid input. Please try again.\n";
            }
            // Check if the guess is too high
            else if (guess > secret) {
                cout << "Your guess is too high.\n";
            }
            // Check if the guess is too low
            else if (guess < secret) {
                cout << "Your guess is too low.\n";
            }
        } while (guess != secret);

        // Congratulate the user and display the number of attempts
        cout << "Congratulations! You guessed the secret number in " << attempts << " attempts.\n";

        // Ask the user if they want to play again
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Goodbye.\n";

    return 0;
}
