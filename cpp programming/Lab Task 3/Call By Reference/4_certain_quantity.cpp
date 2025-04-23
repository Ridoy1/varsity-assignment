// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of products ";
    cin >> n;

    string p[n + 1];

    int stock[n + 1];

    for (int i = 1; i <= n; i++)
    {
        cout << "Enter product name: ";
        cin >> p[i];
        cout << "Enter stock for " << p[i] << ": ";
        cin >> stock[i];
    }

    cout << "\nAvailable products:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << ". " << p[i] << " - " << stock[i] << " units\n";
    }

    int index, quantity;
    cout << "\nEnter product index to buy: ";
    cin >> index;
    cout << "Enter quantity to buy: ";
    cin >> quantity;

    if (quantity <= stock[index])
    {
        stock[index] -= quantity;
        cout << "Purchase successful!\n";
    }
    else
    {
        cout << "Not enough stock!\n";
    }
    cout << "\nUpdated stock:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << p[i] << " - " << stock[i] << " units\n";
    }
}