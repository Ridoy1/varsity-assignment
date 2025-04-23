// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

float calculateAverage(float scores[], int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += scores[i];
    }
    return sum / n;
}

int main()
{
    int n;
    cin >> n;

    float scores[100];

    for (int i = 0; i < n; i++)
    {
        cin >> scores[i];
    }

    float average = calculateAverage(scores, n);

    cout << "\n Final average score: " << average << endl;

    return 0;
}
