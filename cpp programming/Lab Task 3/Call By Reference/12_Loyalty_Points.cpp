// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------\

#include <iostream>
using namespace std;

void updatePoints(int points[], float purchases[], int bonus[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int earnedPoints = (int)(purchases[i] * 0.10);
        points[i] += earnedPoints + bonus[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int points[100], bonus[100];
    float purchases[100];

    for (int i = 0; i < n; i++)
    {
        cin >> points[i];
        cin >> purchases[i];
        cin >> bonus[i];
    }

    updatePoints(points, purchases, bonus, n);

    cout << "\nUpdated Customer Points:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Customer " << i + 1 << ": " << points[i] << " points\n";
    }

    return 0;
}
