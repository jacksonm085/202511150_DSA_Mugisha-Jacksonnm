#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int num = rand() % 10 + 1, guess;

    do {
        cout << "Guess number (1-10): ";
        cin >> guess;

        if (guess > num) cout << "Too high\n";
        else if (guess < num) cout << "Too low\n";

    } while (guess != num);

    cout << "Correct!";
    return 0;
}
