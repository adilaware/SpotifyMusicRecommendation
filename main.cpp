#include <iostream>
using namespace std;

int main() {

    int mood;
    int genre;
    int activity;

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

    cout << "\nSelect your preferred genre:\n";
    cout << "1. Pop\n";
    cout << "2. Hip-Hop\n";
    cout << "3. R&B\n";
    cout << "4. Rock\n";

    cout << "\nEnter your choice (1-4): ";
    cin >> genre;

    cout << "\nYou selected genre option: " << genre << endl;

    cout << "\nSelect your current activity:\n";
    cout << "1. Studying\n";
    cout << "2. Exercising\n";
    cout << "3. Driving\n";
    cout << "4. Relaxing\n";

    cout << "\nEnter your choice (1-4): ";
    cin >> activity;

    cout << "\nYou selected activity option: " << activity << endl;

    return 0;
}