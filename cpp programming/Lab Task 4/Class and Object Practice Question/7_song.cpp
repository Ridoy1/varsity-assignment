//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Song
{
private:
    string title;
    string artist;
    string duration;

public:
    void inputSong()
    {
        getline(cin, title);
        getline(cin, artist);
        getline(cin, duration);
    }

    void displayDetails()
    {
        cout << "\n--- Song Details ---\n";
        cout << "Song Title: " << title << endl;
        cout << "Artist: " << artist << endl;
        cout << "Duration: " << duration << endl;
    }
};

int main()
{
    Song mySong;

    mySong.inputSong();
    mySong.displayDetails();

    return 0;
}
