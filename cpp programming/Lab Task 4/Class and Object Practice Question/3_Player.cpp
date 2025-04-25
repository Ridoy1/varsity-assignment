//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    string name;
    int level;
    int score;

public:
    void inputPlayer()
    {
        getline(cin, name);
        cin >> level;
        cin >> score;
    }

    void increaseScore(int points)
    {
        if (points > 0)
        {
            score += points;
        }
        else
        {
            cout << "Score must be a positive number." << endl;
        }
    }

    void levelUp()
    {
        level++;
    }

    void displayPlayer()
    {
        cout << "\nPlayer Name: " << name << endl;
        cout << "Level: " << level << endl;
        cout << "Score: " << score << endl;
    }
};

int main()
{
    Player p;

    p.inputPlayer();

    int scoreToAdd;
    cin >> scoreToAdd;
    p.increaseScore(scoreToAdd);

    p.levelUp();

    cout << "\nUpdated Player Details:" << endl;

    p.displayPlayer();

    return 0;
}
