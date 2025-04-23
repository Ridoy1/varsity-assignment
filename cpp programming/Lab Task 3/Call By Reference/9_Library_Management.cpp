// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void borrowBook(string books[], int copies[], int index, int n)
{
    if (index >= 1 && index <= n)
    {
        if (copies[index] > 0)
        {
            copies[index]--;
            cout << "You borrowed: " << books[index] << endl;
        }
        else
        {
            cout << "Sorry! No copies available for " << books[index] << endl;
        }
    }
    else
    {
        cout << "Invalid book index!" << endl;
    }
}

int main()
{
    int n;

    cin >> n;

    string books[100];
    int copies[100];

    for (int i = 1; i <= n; i++)
    {

        // cin.ignore();
        // getline(cin, books[i]);
        cin >> books[i];
        cin >> copies[i];
    }

    cout << "\nLibrary Inventory:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << i << ". " << books[i] << " - " << copies[i] << " copies\n";
    }

    int index;
    cin >> index;

    borrowBook(books, copies, index, n);

    cout << "\nUpdated Inventory:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << books[i] << " - " << copies[i] << " copies\n";
    }

    return 0;
}
