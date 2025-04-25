//*******************************
//***** - RIdoy karmakar - ******
//******** - 24103031 -  ********
//*******************************

#include <iostream>
#include <string>
using namespace std;

class MenuItem
{
private:
    string name;
    double price;
    string description;

public:
    void inputItem()
    {
        getline(cin, name);
        cin >> price;
        cin.ignore();
        getline(cin, description);
    }

    void displayItem()
    {
        cout << "\nMenu Item Details:" << endl;
        cout << "Item: " << name << endl;
        cout << "Price: " << price << "/-" << endl;
        cout << "Description: " << description << endl;
    }
};

int main()
{
    MenuItem item;

    item.inputItem();

    item.displayItem();

    return 0;
}
