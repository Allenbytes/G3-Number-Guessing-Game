#include <iostream>
#include <cstdlib>
#include <ctime>
#include <limits>

using namespace std;

void numberGuessingGame() {
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;
    
    cout << "Welcome to Guess Bahjong" << endl;
    cout << "Bahjong is thinking of a number between 1 and 100." << endl;
    
    while (true) {
        cout << "Try to guess it for a chance to win bahay at lupa: ";
        cin >> guess;
        
        if (cin.fail()) {
            cout << "Please enter a valid number." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        
        attempts++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the number " << secretNumber 
                 << " in " << attempts << " attempts." << endl;
            break;
        }
    }
}

int main() {
    numberGuessingGame();
    system("pause");
    return 0;
}
