#include <iostream>
using namespace std;

int main() {

    int mood;

    cout << "========================================\n";
    cout << "     SPOTIFY MUSIC RECOMMENDATION\n";
    cout << "========================================\n";

    cout << "\nWelcome!\n";
    cout << "Let's find the perfect music for you.\n";

    cout << "\nSelect your mood:\n";
    cout << "1. Happy\n";
    cout << "2. Sad\n";
    cout << "3. Relaxed\n";
    cout << "4. Energetic\n";

    cout << "\nEnter your choice (1-4): ";
    cin >> mood;

    cout << "\nYou selected mood option: " << mood << endl;

    return 0;
}