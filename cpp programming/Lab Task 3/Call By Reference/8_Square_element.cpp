// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void squareElements(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    squareElements(arr, n);

    cout << "\nSquared elements:\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
