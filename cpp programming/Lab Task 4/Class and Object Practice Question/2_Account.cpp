//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
    string accountNumber;
    string accountHolderName;
    double balance;

public:
    void inputAccount()
    {

        cin >> accountNumber;
        cin.ignore();
        getline(cin, accountHolderName);
        cin >> balance;
    }

    double deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid deposit amount." << endl;
        }
        return balance;
    }

    double withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid or insufficient funds for withdrawal." << endl;
        }
        return balance;
    }

    void displayAccount()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: " << balance << "/-" << endl;
    }
};

int main()
{
    Account myAccount;

    myAccount.inputAccount();

    double depositAmount, withdrawAmount;
    char ch;
    cin >> ch;
    if (ch == 'D' || ch == 'd')
    {
        cout << "Enter amount to deposit: ";
        cin >> depositAmount;
        myAccount.deposit(depositAmount);
    }
    else if (ch == 'W' || ch == 'w')
    {
        cout << "Enter amount to withdraw: ";

        cin >> withdrawAmount;
        myAccount.withdraw(withdrawAmount);
    }
    else
    {
        cout << "your valid character is w or d" << endl;
    }
    myAccount.displayAccount();

    return 0;
}
