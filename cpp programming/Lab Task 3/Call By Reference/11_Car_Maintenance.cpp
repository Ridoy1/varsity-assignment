// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void updateMileage(int mileages[], int n, int serviceMileage)
{
    for (int i = 0; i < n; i++)
    {
        mileages[i] += serviceMileage;
    }
}

int main()
{
    int n;
    cin >> n;

    int mileages[100];

    for (int i = 0; i < n; i++)
    {
        cin >> mileages[i];
    }

    int serviceMileage;

    cin >> serviceMileage;

    updateMileage(mileages, n, serviceMileage);

    cout << "\nUpdated mileages after service:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Car " << i + 1 << ": " << mileages[i] << " km" << endl;
    }

    return 0;
}
