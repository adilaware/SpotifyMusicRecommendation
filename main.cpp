#include <iostream>
using namespace std;

int main() {

    int mood;
    int genre;
    int activity;

    string moodName;
    string genreName;
    string activityName;
    string song;
    string artist;
    string reason;

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

    switch (mood) {
    case 1:
        moodName = "Happy";
        break;
    case 2:
        moodName = "Sad";
        break;
    case 3:
        moodName = "Relaxed";
        break;
    case 4:
        moodName = "Energetic";
        break;
    }

    switch (genre) {
    case 1:
        genreName = "Pop";
        break;
    case 2:
        genreName = "Hip-Hop";
        break;
    case 3:
        genreName = "R&B";
        break;
    case 4:
        genreName = "Rock";
        break;
    }

    switch (activity) {
    case 1:
        activityName = "Studying";
        break;
    case 2:
        activityName = "Exercising";
        break;
    case 3:
        activityName = "Driving";
        break;
    case 4:
        activityName = "Relaxing";
        break;
    }

    // Music recommendation logic

    if (mood == 1 && genre == 1) {
        song = "Levitating";
        artist = "Dua Lipa";
    }
    else if (mood == 1 && genre == 2) {
        song = "Good Life";
        artist = "Kanye West";
    }
    else if (mood == 1 && genre == 3) {
        song = "Leave The Door Open";
        artist = "Silk Sonic";
    }
    else if (mood == 1 && genre == 4) {
        song = "Don't Stop Me Now";
        artist = "Queen";
    }

    else if (mood == 2 && genre == 1) {
        song = "Someone Like You";
        artist = "Adele";
    }
    else if (mood == 2 && genre == 2) {
        song = "Love Yourz";
        artist = "J. Cole";
    }
    else if (mood == 2 && genre == 3) {
        song = "Heartbreak Anniversary";
        artist = "Giveon";
    }
    else if (mood == 2 && genre == 4) {
        song = "The Scientist";
        artist = "Coldplay";
    }

    else if (mood == 3 && genre == 1) {
        song = "Golden";
        artist = "Harry Styles";
    }
    else if (mood == 3 && genre == 2) {
        song = "The World Is Yours";
        artist = "Nas";
    }
    else if (mood == 3 && genre == 3) {
        song = "Best Part";
        artist = "Daniel Caesar ft. H.E.R.";
    }
    else if (mood == 3 && genre == 4) {
        song = "Yellow";
        artist = "Coldplay";
    }

    else if (mood == 4 && genre == 1) {
        song = "Blinding Lights";
        artist = "The Weeknd";
    }
    else if (mood == 4 && genre == 2) {
        song = "HUMBLE.";
        artist = "Kendrick Lamar";
    }
    else if (mood == 4 && genre == 3) {
        song = "Yeah!";
        artist = "Usher";
    }
    else if (mood == 4 && genre == 4) {
        song = "Believer";
        artist = "Imagine Dragons";
    }

    if (activity == 1) {
    reason = "This song matches your selected mood and genre and can accompany your study session.";
    }
    else if (activity == 2) {
        reason = "This song matches your selected mood and genre and can add energy to your workout.";
    }
    else if (activity == 3) {
        reason = "This song matches your selected mood and genre and is a good choice for your drive.";
    }
    else if (activity == 4) {
        reason = "This song matches your selected mood and genre and suits a relaxing listening session.";
    }

    cout << "\n========================================\n";
    cout << "       YOUR MUSIC RECOMMENDATION\n";
    cout << "========================================\n";

    cout << "\nYour Preferences:\n";
    cout << "Mood     : " << moodName << endl;
    cout << "Genre    : " << genreName << endl;
    cout << "Activity : " << activityName << endl;

    cout << "\nRecommended Song:\n";
    cout << "Song   : " << song << endl;
    cout << "Artist : " << artist << endl;

    cout << "\nWhy this recommendation?\n";
    cout << reason << endl;

    cout << "\n========================================\n";

    return 0;
}