// ----------------Ridoy karmakar-------------
//-----------------24103031-------------------

#include <iostream>
using namespace std;

void updateBalance(float balances[], int index, float amount, char type)
{
    if (type == 'd')
    {
        balances[index] += amount;
        cout << "Deposit successful!\n";
    }
    else if (type == 'w')
    {
        if (amount <= balances[index])
        {
            balances[index] -= amount;
            cout << "Withdrawal successful!\n";
        }
        else
        {
            cout << "Ei Modon balance nai\n";
        }
    }
    else
    {
        cout << "Invalid operation type!\n";
    }
}

int main()
{
    int n;
    cout << "Enter number of bank accounts: ";
    cin >> n;

    string name[100];
    float balances[100];

    for (int i = 1; i <= n; i++)
    {
        cin >> name[i];
        cin >> balances[i];
    }

    cout << "\nAccount Balances:\n";
    for (int i = 1; i <= n; i++)
    {
        cout << name[i] << " : " << balances[i] << " /-" << endl;
    }

    int index;
    float amount;
    char type;

    cout << "\nEnter account index: ";
    cin >> index;
    cout << "Enter operation type (d for deposit, w for withdraw): ";
    cin >> type;
    cout << "Enter amount: ";
    cin >> amount;

    updateBalance(balances, index, amount, type);

    cout << "\nUpdated Account Balances:\n";

    for (int i = 1; i <= n; i++)
    {
        cout << name[i] << " : " << balances[i] << " /-" << endl;
    }

    return 0;
}
