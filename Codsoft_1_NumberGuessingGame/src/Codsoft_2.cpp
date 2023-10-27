#include <iostream>
#include <ctime>

using namespace std;

int main() {
   srand(static_cast<unsigned>(time(nullptr)));

    int secretNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I've picked a random number between 1 and 100. Try to guess it!" << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess < secretNumber) {
            cout << "Too low! Try again." << endl;
            cout << endl;
        } else if (userGuess > secretNumber) {
            cout << "Too high! Try again." << endl;
            cout << endl;
        } else {
            cout << "Congratulations! You've entered the correct number: " << secretNumber << endl;
            cout << "It took you " << attempts << " attempts." << endl;
        }
    } while (userGuess != secretNumber);

    return 0;
}

